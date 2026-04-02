// @GLOBALS: 0:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		if(1 != 0) {
			func_2814();
			if(var_22_bool == 40043) {
				object var_27_object = var_1_object;
				func_2950(var_0_object);
			}
			if(var_21_cvector == 40042) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538167); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538168, -1, 40043); //@t
				bool var_48_bool = false;
				bool var_49_bool;
				func_2979(var_49_bool, var_1_object);
				if(var_49_bool != 0) {
					bool var_60_bool;
					func_2955(var_1_object);
					if(var_60_bool != 0)
						var_48_bool = true;
				}
				if(var_48_bool != 0)
					var_0_object->AddReply(538169, 40045, 40044); //@t
				bool var_71_bool = false;
				bool var_72_bool = false;
				bool var_73_bool;
				func_2979(var_73_bool, var_1_object);
				if(var_73_bool != 0) {
					bool var_75_bool;
					func_2999(var_75_bool, var_1_object);
					if(var_75_bool != 0)
						var_72_bool = true;
				}
				if(var_72_bool != 0) {
					bool var_86_bool;
					func_2955(var_1_object);
					if(var_86_bool != 0)
						var_71_bool = true;
				}
				if(var_71_bool != 0)
					var_0_object->AddReply(538179, 40055, 40054); //@t
				bool var_91_bool = false;
				bool var_92_bool;
				func_2989(var_92_bool, var_1_object);
				if(var_92_bool != 0) {
					bool var_98_bool;
					func_2955(var_1_object);
					if(var_98_bool != 0)
						var_91_bool = true;
				}
				if(var_91_bool != 0)
					var_0_object->AddReply(538190, 40067, 40066); //@t
				bool var_103_bool = true;
				bool var_104_bool;
				func_2955(var_1_object);
				if(var_104_bool != 1) {
					bool var_106_bool;
					func_2967(var_1_object);
					if(var_106_bool != 1)
						var_103_bool = false;
				}
				if(var_103_bool != 0)
					var_0_object->AddReply(538204, -1, 40081); //@t
				var_0_object->AddReply(538205, -1, 40082); //@t
				return 0;
			}
			if(var_21_cvector == 40067) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538191); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538192, 40069, 40068); //@t
				var_0_object->AddReply(538203, 40069, 40079); //@t
				return 0;
			}
			if(var_21_cvector == 40069) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538193); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538194, 40071, 40070); //@t
				var_0_object->AddReply(538202, -1, 40078); //@t
				return 0;
			}
			if(var_21_cvector == 40071) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538195); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538196, 40073, 40072); //@t
				var_0_object->AddReply(538201, -1, 40077); //@t
				return 0;
			}
			if(var_21_cvector == 40073) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538197); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538198, -1, 40074); //@t
				var_0_object->AddReply(538199, -1, 40075); //@t
				var_0_object->AddReply(538200, -1, 40076); //@t
				return 0;
			}
			if(var_21_cvector == 40055) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538181, 40057, 40056); //@t
				var_0_object->AddReply(538188, 40057, 40063); //@t
				var_0_object->AddReply(538189, -1, 40065); //@t
				return 0;
			}
			if(var_21_cvector == 40057) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538182); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538183, 40059, 40058); //@t
				var_0_object->AddReply(538187, -1, 40062); //@t
				return 0;
			}
			if(var_21_cvector == 40059) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538184); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538185, -1, 40060); //@t
				var_0_object->AddReply(538186, -1, 40061); //@t
				return 0;
			}
			if(var_21_cvector == 40045) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538171, 40047, 40046); //@t
				var_0_object->AddReply(538175, 40051, 40050); //@t
				var_0_object->AddReply(538178, -1, 40053); //@t
				return 0;
			}
			if(var_21_cvector == 40051) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538176); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538177, -1, 40052); //@t
				return 0;
			}
			if(var_21_cvector == 40047) {
				func_217(var_22_bool, "Neutral");
				var_0_object->SetMessage(538172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538173, -1, 40048); //@t
				var_0_object->AddReply(538174, -1, 40049); //@t
				return 0;
			}
			var_3_string = true;
			bool var_224_bool;
			func_3981(var_224_bool);
			if(var_224_bool != 0)
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
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_25_object;
		var_21_bool = var_25_object;
		func_3731(var_25_object);
		int var_23_int;
		int var_24_int = var_23_int;
		if(var_23_int > 0) {
			object var_28_object;
			var_21_bool = var_28_object;
			func_3734(var_28_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_3740();
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, object var_22_object, cvector var_23_cvector, bool var_24_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
	}

}


maintask task_3
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		@SensePlayerOnly(true);
		func_3983();
		func_785();
	
		for(;;) {
			var_2_object = false;
			func_1046(var_19_cvector, var_20_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_25_object;
		var_21_bool = var_25_object;
		func_3731(var_25_object);
		int var_23_int;
		int var_24_int = var_23_int;
		if(var_23_int > 0) {
			if(var_23_int > 1)
				func_981(var_23_int);
			object var_31_object;
			var_21_bool = var_31_object;
			func_3734(var_31_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_24_object;
		var_21_bool = var_24_object;
		func_3536(var_24_object);
		int var_33_int; object var_34_object;
		var_21_bool = var_34_object;
		func_3619(var_33_int, var_34_object);
		int var_23_int;
		var_33_int = var_23_int;
		if(var_23_int > 0) {
			if(var_23_int > 1)
				func_981(var_23_int);
			object var_74_object;
			var_21_bool = var_74_object;
			func_3629(var_74_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, cvector var_22_cvector, bool var_23_bool)
	{
		int var_25_int;
		object var_27_object;
		var_21_object = var_27_object;
		object var_28_object;
		var_22_cvector = var_28_object;
		bool var_29_bool;
		var_23_bool = var_29_bool;
		func_4011(var_27_object, var_28_object, var_29_bool);
		bool var_26_bool;
		if(var_26_bool != 0) {
			int var_73_int; object var_74_object; bool var_75_bool;
			var_21_object = var_74_object;
			var_23_bool = var_75_bool;
			func_3637(var_74_object, var_75_bool);
			var_73_int = var_25_int;
			if(var_25_int > 0) {
				if(var_25_int > 1)
					func_981(var_25_int);
				object var_109_object;
				var_21_object = var_109_object;
				func_3647(var_109_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_25_object;
		var_21_bool = var_25_object;
		func_3721(var_25_object);
		int var_23_int;
		int var_24_int = var_23_int;
		if(var_23_int > 0) {
			if(var_23_int > 1)
				func_981(var_23_int);
			object var_31_object;
			var_21_bool = var_31_object;
			func_3724();
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, string var_9_string, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		int var_24_int;
		object var_26_object;
		var_21_cvector = var_26_object;
		string var_27_string;
		var_22_bool = var_27_string;
		bool var_25_bool;
		func_3450(var_25_bool, var_26_object, var_27_string);
		if(var_25_bool != 0) {
			func_981(var_24_int);
			object var_58_object; string var_59_string;
			var_21_cvector = var_58_object;
			var_22_bool = var_59_string;
			func_3482(var_58_object, var_59_string);
		} else {
			int var_207_int; string var_208_string; object var_209_object;
			var_22_bool = var_208_string;
			var_21_cvector = var_209_object;
			func_3726(var_209_object);
			var_207_int = var_24_int;
			if(!(var_24_int > 0)) goto Label_922;
			if(var_24_int > 1)
				func_981(var_24_int);
			string var_214_string; object var_215_object;
			var_22_bool = var_214_string;
			var_21_cvector = var_215_object;
			func_3729();
		}
	Label_922:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, string var_8_string, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		bool var_22_bool; string var_23_string;
		func_3549(var_22_bool, var_23_string);
		if(var_22_bool != 0) {
			func_981(var_23_string);
			string var_32_string;
			var_21_bool = var_32_string;
			func_3565(var_32_string);
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		bool var_22_bool; object var_23_object;
		func_3507(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			func_981(var_23_object);
			object var_37_object;
			var_21_bool = var_37_object;
			func_3530(var_37_object);
		} else {
			object var_111_object;
			func_1006(var_111_object, var_111_object);
		}
	
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_22_object;
		func_1006(var_22_object, var_22_object);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, int var_8_int, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 110) {
		}
		var_2_object = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_981(var_20_bool);
		func_3740();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_981(var_21_bool);
		object var_23_object;
		var_21_bool = var_23_object;
		func_3426();
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		@RequestClearPath(var_21_bool);
	}

	void OnActorStuck(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		@Stop();
	}

}


task task_4
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_25_object;
		var_21_bool = var_25_object;
		func_3731(var_25_object);
		int var_23_int;
		int var_24_int = var_23_int;
		if(var_23_int > 0) {
			if(var_23_int > 1)
				func_1384();
			object var_30_object;
			var_21_bool = var_30_object;
			func_3734(var_30_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_24_object;
		var_21_bool = var_24_object;
		func_3536(var_24_object);
		int var_33_int; object var_34_object;
		var_21_bool = var_34_object;
		func_3619(var_33_int, var_34_object);
		int var_23_int;
		var_33_int = var_23_int;
		if(var_23_int > 0) {
			if(var_23_int > 1)
				func_1384();
			object var_73_object;
			var_21_bool = var_73_object;
			func_3629(var_73_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, cvector var_22_cvector, bool var_23_bool)
	{
		int var_25_int;
		object var_27_object;
		var_21_object = var_27_object;
		object var_28_object;
		var_22_cvector = var_28_object;
		bool var_29_bool;
		var_23_bool = var_29_bool;
		func_4011(var_27_object, var_28_object, var_29_bool);
		bool var_26_bool;
		if(var_26_bool != 0) {
			int var_73_int; object var_74_object; bool var_75_bool;
			var_21_object = var_74_object;
			var_23_bool = var_75_bool;
			func_3637(var_74_object, var_75_bool);
			var_73_int = var_25_int;
			if(var_25_int > 0) {
				if(var_25_int > 1)
					func_1384();
				object var_108_object;
				var_21_object = var_108_object;
				func_3647(var_108_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_25_object;
		var_21_bool = var_25_object;
		func_3721(var_25_object);
		int var_23_int;
		int var_24_int = var_23_int;
		if(var_23_int > 0) {
			if(var_23_int > 1)
				func_1384();
			object var_30_object;
			var_21_bool = var_30_object;
			func_3724();
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, string var_9_string, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		int var_24_int;
		object var_26_object;
		var_21_cvector = var_26_object;
		string var_27_string;
		var_22_bool = var_27_string;
		bool var_25_bool;
		func_3450(var_25_bool, var_26_object, var_27_string);
		if(var_25_bool != 0) {
			func_1384();
			object var_57_object; string var_58_string;
			var_21_cvector = var_57_object;
			var_22_bool = var_58_string;
			func_3482(var_57_object, var_58_string);
		} else {
			int var_206_int; string var_207_string; object var_208_object;
			var_22_bool = var_207_string;
			var_21_cvector = var_208_object;
			func_3726(var_208_object);
			var_206_int = var_24_int;
			if(!(var_24_int > 0)) goto Label_1267;
			if(var_24_int > 1)
				func_1384();
			string var_213_string; object var_214_object;
			var_22_bool = var_213_string;
			var_21_cvector = var_214_object;
			func_3729();
		}
	Label_1267:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, string var_8_string, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		string var_23_string;
		var_21_bool = var_23_string;
		bool var_22_bool;
		func_3549(var_22_bool, var_23_string);
		if(var_22_bool != 0) {
			func_1384();
			string var_31_string;
			var_21_bool = var_31_string;
			func_3565(var_31_string);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_1384();
		func_3740();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_23_object;
		var_21_bool = var_23_object;
		bool var_22_bool;
		func_3507(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			func_1384();
			object var_36_object;
			var_21_bool = var_36_object;
			func_3530(var_36_object);
		}
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_25_object;
		var_21_bool = var_25_object;
		func_3731(var_25_object);
		int var_23_int;
		int var_24_int = var_23_int;
		if(var_23_int > 0) {
			if(var_23_int > 1)
				func_1588();
			object var_32_object;
			var_21_bool = var_32_object;
			func_3734(var_32_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_24_object;
		var_21_bool = var_24_object;
		func_3536(var_24_object);
		int var_33_int; object var_34_object;
		var_21_bool = var_34_object;
		func_3619(var_33_int, var_34_object);
		int var_23_int;
		var_33_int = var_23_int;
		if(var_23_int > 0) {
			if(var_23_int > 1)
				func_1588();
			object var_75_object;
			var_21_bool = var_75_object;
			func_3629(var_75_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, cvector var_22_cvector, bool var_23_bool)
	{
		int var_25_int;
		object var_27_object;
		var_21_object = var_27_object;
		object var_28_object;
		var_22_cvector = var_28_object;
		bool var_29_bool;
		var_23_bool = var_29_bool;
		func_4011(var_27_object, var_28_object, var_29_bool);
		bool var_26_bool;
		if(var_26_bool != 0) {
			int var_73_int; object var_74_object; bool var_75_bool;
			var_21_object = var_74_object;
			var_23_bool = var_75_bool;
			func_3637(var_74_object, var_75_bool);
			var_73_int = var_25_int;
			if(var_25_int > 0) {
				if(var_25_int > 1)
					func_1588();
				object var_110_object;
				var_21_object = var_110_object;
				func_3647(var_110_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_25_object;
		var_21_bool = var_25_object;
		func_3721(var_25_object);
		int var_23_int;
		int var_24_int = var_23_int;
		if(var_23_int > 0) {
			if(var_23_int > 1)
				func_1588();
			object var_32_object;
			var_21_bool = var_32_object;
			func_3724();
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, string var_10_string, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		int var_24_int;
		object var_26_object;
		var_21_cvector = var_26_object;
		string var_27_string;
		var_22_bool = var_27_string;
		bool var_25_bool;
		func_3450(var_25_bool, var_26_object, var_27_string);
		if(var_25_bool != 0) {
			func_1588();
			object var_59_object; string var_60_string;
			var_21_cvector = var_59_object;
			var_22_bool = var_60_string;
			func_3482(var_59_object, var_60_string);
		} else {
			int var_208_int; string var_209_string; object var_210_object;
			var_22_bool = var_209_string;
			var_21_cvector = var_210_object;
			func_3726(var_210_object);
			var_208_int = var_24_int;
			if(!(var_24_int > 0)) goto Label_1573;
			if(var_24_int > 1)
				func_1588();
			string var_215_string; object var_216_object;
			var_22_bool = var_215_string;
			var_21_cvector = var_216_object;
			func_3729();
		}
	Label_1573:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, string var_9_string, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		string var_23_string;
		var_21_bool = var_23_string;
		bool var_22_bool;
		func_3549(var_22_bool, var_23_string);
		if(var_22_bool != 0) {
			func_1588();
			string var_33_string;
			var_21_bool = var_33_string;
			func_3565(var_33_string);
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_1588();
		object var_24_object;
		var_21_bool = var_24_object;
		func_3426();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		if(var_21_bool != 111)
			return 4;
		bool var_28_bool;
		func_2539(var_28_bool, var_0_object);
		if(!var_28_bool) { //@nz
			func_1588();
			return 4;
		}
		cvector var_24_cvector;
		@GetDirection(var_24_cvector);
		cvector var_65_cvector;
		func_2466(var_65_cvector, var_0_object);
		cvector var_25_cvector;
		var_65_cvector = var_25_cvector;
		float var_71_float; cvector var_72_cvector; cvector var_73_cvector;
		var_24_cvector = var_72_cvector;
		var_25_cvector = var_73_cvector;
		func_2911(var_71_float, var_72_cvector, var_73_cvector);
		if(var_71_float < 0.49999997)
			func_2689(var_0_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_1588();
		func_3740();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		object var_23_object;
		var_21_bool = var_23_object;
		bool var_22_bool;
		func_3507(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			func_1588();
			object var_38_object;
			var_21_bool = var_38_object;
			func_3530(var_38_object);
		}
	}

}


task task_6
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_1854(var_20_bool);
		func_3740();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		cvector var_26_cvector; float var_27_float; cvector var_28_cvector; float var_29_float;
		if(var_21_bool != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_26_cvector);
			@FindDirLength(var_27_float, var_26_cvector, 7000.0);
			cvector var_35_cvector;
			func_1699(var_29_float, var_35_cvector, 1.7453294);
			var_35_cvector = var_28_cvector;
			var_29_float = var_28_cvector | var_28_cvector;
			bool var_65_bool = false;
			if(var_29_float >= 2500.0) {
				bool var_68_bool;
				var_72_bool = var_29_float >= ((var_27_float * var_27_float) * 2.25);
				if(var_72_bool != 1) {
					bool var_73_bool;
					func_1870(true, var_73_bool);
					if(var_73_bool != 1)
						var_68_bool = false;
				}
				if(var_68_bool != 0)
					var_65_bool = true;
			}
			if(var_65_bool == 0) goto Label_1853;
			@Stop();
			cvector var_93_cvector;
			func_2461(var_93_cvector);
			var_1_object = var_93_cvector + var_28_cvector;
		}
	Label_1853:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_1854(var_21_bool);
		object var_23_object;
		var_21_bool = var_23_object;
		func_3426();
	}

}


task task_7
{
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, int var_15_int, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		cvector var_26_cvector; float var_27_float; cvector var_28_cvector; float var_29_float;
		if(var_21_bool != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_26_cvector);
			@FindDirLength(var_27_float, var_26_cvector, 7000.0);
			cvector var_35_cvector;
			func_1886(var_29_float, var_35_cvector, 1.7453294);
			var_35_cvector = var_28_cvector;
			var_29_float = var_28_cvector | var_28_cvector;
			bool var_65_bool = false;
			if(var_29_float >= 2500.0) {
				bool var_68_bool;
				var_72_bool = var_29_float >= ((var_27_float * var_27_float) * 2.25);
				if(var_72_bool != 1) {
					bool var_73_bool;
					func_2057(true, var_73_bool);
					if(var_73_bool != 1)
						var_68_bool = false;
				}
				if(var_68_bool != 0)
					var_65_bool = true;
			}
			if(var_65_bool == 0) goto Label_2040;
			@Stop();
			cvector var_93_cvector;
			func_2461(var_93_cvector);
			var_1_object = var_93_cvector + var_28_cvector;
		}
	Label_2040:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_2041(var_21_bool);
		object var_23_object;
		var_21_bool = var_23_object;
		func_3426();
	}

}


task task_8
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_2235(var_20_bool);
		func_3740();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, int var_18_int, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		cvector var_26_cvector; float var_27_float; cvector var_28_cvector; float var_29_float;
		if(var_21_bool != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_26_cvector);
			@FindDirLength(var_27_float, var_26_cvector, 7000.0);
			cvector var_35_cvector;
			func_2080(var_29_float, var_35_cvector, 1.7453294);
			var_35_cvector = var_28_cvector;
			var_29_float = var_28_cvector | var_28_cvector;
			bool var_65_bool = false;
			if(var_29_float >= 2500.0) {
				bool var_68_bool;
				var_72_bool = var_29_float >= ((var_27_float * var_27_float) * 2.25);
				if(var_72_bool != 1) {
					bool var_73_bool;
					func_2251(true, var_73_bool);
					if(var_73_bool != 1)
						var_68_bool = false;
				}
				if(var_68_bool != 0)
					var_65_bool = true;
			}
			if(var_65_bool == 0) goto Label_2234;
			@Stop();
			cvector var_93_cvector;
			func_2461(var_93_cvector);
			var_1_object = var_93_cvector + var_28_cvector;
		}
	Label_2234:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_2235(var_21_bool);
		object var_23_object;
		var_21_bool = var_23_object;
		func_3426();
	}

}


task task_9
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_2429(var_20_bool);
		func_3740();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, int var_21_int)
	{
		cvector var_26_cvector; float var_27_float; cvector var_28_cvector; float var_29_float;
		if(var_21_int != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_26_cvector);
			@FindDirLength(var_27_float, var_26_cvector, 7000.0);
			cvector var_35_cvector;
			func_2274(var_29_float, var_35_cvector, 1.7453294);
			var_35_cvector = var_28_cvector;
			var_29_float = var_28_cvector | var_28_cvector;
			bool var_65_bool = false;
			if(var_29_float >= 2500.0) {
				bool var_68_bool;
				var_72_bool = var_29_float >= ((var_27_float * var_27_float) * 2.25);
				if(var_72_bool != 1) {
					bool var_73_bool;
					func_2445(true, var_73_bool);
					if(var_73_bool != 1)
						var_68_bool = false;
				}
				if(var_68_bool != 0)
					var_65_bool = true;
			}
			if(var_65_bool == 0) goto Label_2428;
			@Stop();
			cvector var_93_cvector;
			func_2461(var_93_cvector);
			var_1_object = var_93_cvector + var_28_cvector;
		}
	Label_2428:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object)
	{
		func_2429(var_21_object);
		object var_23_object;
		var_21_object = var_23_object;
		func_3426();
	}

}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, string var_22_string)
{
	float var_24_float;
	if(var_22_string == "health") {
		@GetProperty("health", var_24_float);
		if(var_24_float <= 0)
			@SignalDeath(var_21_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_3405(var_22_object);
}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, int var_22_int, float var_23_float, float var_24_float)
{
	object var_25_object;
	var_21_object = var_25_object;
	int var_26_int;
	var_22_int = var_26_int;
	float var_27_float;
	var_23_float = var_27_float;
	func_2607(var_25_object, var_26_int, var_27_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, int var_22_int, float var_23_float, float var_24_float, cvector var_25_cvector, cvector var_26_cvector)
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
	func_2675(var_29_float, var_30_cvector, var_31_cvector);
}


void func_0(object var_0_object, int var_46_int, object var_47_object)
{
	var_0_object = var_47_object;
	bool var_57_bool; object var_58_object;
	var_47_object = var_58_object;
	func_2705(var_57_bool, var_58_object, 70.0);
	if(!var_57_bool) { //@nz
		var_46_int = -2;
		return 8;
	}
	object var_53_object;
	@CreateDialog(var_53_object);
	int var_104_int;
	func_3975(var_104_int);
	var_53_object->SetNPCName(var_104_int);
	int var_105_int;
	func_3973(var_105_int);
	var_53_object->SetNPCDescription(var_105_int);
	string var_106_string;
	func_3977(var_106_string);
	var_53_object->SetPhoto(var_106_string);
	string var_107_string;
	func_3979(var_107_string);
	var_53_object->SetPhoto2(var_107_string);
	int var_108_int;
	func_3034(var_108_int);
	var_53_object->SetPlayerName(var_108_int);
	bool var_54_bool;
	@IsOverrideActive(var_54_bool);
	if(var_54_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	@DoDialog(var_53_object);
	object var_117_object; object var_118_object;
	var_47_object = var_117_object;
	var_53_object = var_118_object;
	TaskCall(1);
	func_74(var_119_object, var_120_object, var_121_string, var_122_bool, var_117_object, var_118_object);
	TaskReturn();
	bool var_56_bool;
	var_53_object->IsDialogEnd(var_56_bool);
	
	for(;;) {
		var_223_bool = !var_56_bool; //@nz
		if(var_223_bool == 0) goto Label_63;
		@sync();
		var_53_object->IsDialogEnd(var_56_bool);
	}
	
Label_63:
	object var_224_object;
	var_47_object = var_224_object;
	func_2773();
	@StopDialog(var_53_object);
	var_53_object->GetReturnValue(-1);
	int var_55_int = var_46_int;
}
EMIT "Stack[-4] = 0";


void func_3585(int var_70_int)
{
	int var_73_int; bool var_74_bool;
	var_73_int = 0;
	
	for(;;) {
		string var_76_string; int var_77_int;
		var_73_int = var_77_int;
		func_3578(var_76_string, var_77_int);
		@HasAnimation(var_74_bool, "all", var_76_string);
		if(!var_74_bool) //@nz
			break;
		var_73_int += 1;
	}
	var_73_int = var_70_int;
}


void func_2563(object var_38_object)
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


void func_2057(object var_0_object, bool var_73_bool)
{
	cvector var_76_cvector;
	@GetDirection(var_76_cvector);
	cvector var_78_cvector;
	func_2466(var_78_cvector, var_0_object);
	cvector var_77_cvector;
	var_78_cvector = var_77_cvector;
	float var_84_float; cvector var_85_cvector; cvector var_86_cvector;
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_2884(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= -0.34202012;
}


// @pe
void func_3602(int var_64_int)
{
	bool var_66_bool;
	func_4005(var_66_bool);
	if(var_66_bool != 0)
		var_64_int = 2;
	else
		var_64_int = 0;
	
}


void func_1046(object var_0_object, object var_1_object)
{
	float var_33_float; cvector var_34_cvector; cvector var_35_cvector; bool var_36_bool; object var_37_object; bool var_38_bool;
	@rand(var_33_float, 0.5);
	@Sleep(var_33_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_1058:
				@GetPosition(var_35_cvector);
				float var_42_float;
				func_1105(var_42_float);
				@GetRandomPFPointInCircle(var_34_cvector, var_35_cvector, var_42_float, var_36_bool);
				if(var_36_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_1058;
			}
				var_1_object = false;
		}
		}
		goto Label_1074;

	Label_1074:
		object var_46_object; cvector var_47_cvector;
		var_34_cvector = var_47_cvector;
		func_1133(var_46_object, var_47_cvector);
		var_46_object = var_37_object;
		if(var_37_object != null) {
			@RotatePath(var_37_object, var_38_bool);
			if(var_38_bool != 0) {
				bool var_52_bool;
				func_1131(var_52_bool);
				@FollowPath(var_37_object, var_52_bool, var_38_bool);
				var_37_object = null;
				if(var_38_bool != 0) {
					TaskCall(4);
					func_1303();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_37_object = null;
	}
	
}


// @pe
void func_3611(object var_81_object)
{
	object var_82_object;
	var_81_object = var_82_object;
	TaskCall(5);
	func_1389(var_83_object, var_82_object);
	TaskReturn();
}


void func_2080(object var_0_object, cvector var_35_cvector, float var_36_float)
{
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	var_0_object->GetPosition(var_44_cvector); //@t
	cvector var_45_cvector;
	@GetDirection(var_45_cvector);
	cvector var_49_cvector;
	cvector var_51_cvector;
	func_2868(var_51_cvector, (var_43_cvector - var_44_cvector));
	func_2868(var_49_cvector, (var_51_cvector + (var_45_cvector * 0.75)));
	cvector var_46_cvector;
	var_49_cvector = var_46_cvector;
	cvector var_47_cvector;
	float var_48_float;
	@FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, 32, 7000.0);
	if((var_48_float - 100) < 0)
		var_48_float = 0;
	var_35_cvector = var_47_cvector * var_48_float;
}


// @pe
void func_3619(int var_33_int, object var_34_object)
{
	object var_36_object;
	var_34_object = var_36_object;
	bool var_35_bool;
	func_2539(var_35_bool, var_36_object);
	if(var_35_bool != 0)
		var_33_int = 2;
	else
		var_33_int = 0;
	
}


// @pe
void func_3629(object var_75_object)
{
	object var_76_object;
	var_75_object = var_76_object;
	TaskCall(6);
	func_1664(var_76_object);
	TaskReturn();
}


void func_2607(object var_25_object, int var_26_int, float var_27_float)
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
		func_2466(var_55_cvector, var_56_object);
		var_55_cvector = var_54_cvector;
		func_2868(var_53_cvector, var_54_cvector);
		var_53_cvector = var_37_cvector;
		@CreateVectorVector(var_38_object);
		var_39_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_39_int), var_40_bool, var_41_cvector, var_42_cvector);
			if(!var_40_bool) { //@nz
				break;
			Label_2669:
				var_38_object = null;
	}
			object var_115_object;
			var_25_object = var_115_object;
			func_2563(var_115_object);
		}
		if((var_42_cvector | var_37_cvector) >= 0.70710677)
			var_38_object->add(var_41_cvector);
		var_39_int += 1;
	}
	int var_43_int;
	var_38_object->size(var_43_int);
	if(var_43_int == 0) goto Label_2669;
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
	func_2675(var_72_float, var_73_cvector, var_74_cvector);
}


void func_1588(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_3637(int var_73_int, object var_74_object)
{
	object var_77_object;
	var_74_object = var_77_object;
	bool var_76_bool;
	func_2539(var_76_bool, var_77_object);
	if(var_76_bool != 0)
		var_73_int = 2;
	else
		var_73_int = 0;
	
}


void func_3126(float var_67_float)
{
	object var_70_object;
	@FindActor(var_70_object, "player");
	if(!var_70_object) //@nz
		var_67_float = 0;
	float var_71_float;
	var_70_object->GetProperty("reputation", var_71_float);
	var_71_float = var_67_float;
}
EMIT "Stack[-2] = 0";


void func_2110(object var_0_object, object var_1_object, object var_2_object, object var_40_object)
{
	float var_50_float; cvector var_52_cvector; float var_53_float;
	cvector var_54_cvector;
	func_2080(var_53_float, var_54_cvector, 1.7453294);
	cvector var_49_cvector;
	var_54_cvector = var_49_cvector;
	if((var_49_cvector | var_49_cvector) < 2500.0) {
		cvector var_86_cvector;
		func_2080(var_53_float, var_86_cvector, 2.6179938);
		var_86_cvector = var_49_cvector;
		var_50_float = var_49_cvector | var_49_cvector;
		if(var_50_float < 2500.0) {
			var_91_float = sqrt(var_50_float);
			@Trace("Can't retreat, distance: " + var_91_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_94_float = GetByIndex(var_49_cvector, 0);
	var_95_float = GetByIndex(var_49_cvector, 2);
	@Rotate(var_94_float, var_95_float);
	cvector var_96_cvector;
	func_2461(var_96_cvector);
	@SetTimer(120, 0.5);
	
Label_2152:
	bool var_51_bool;
	@MovePoint((var_96_cvector + var_49_cvector), 1, var_51_bool);
	if(var_51_bool != 0) {
		if(var_40_object == null) {
			goto Label_2182;
		EMIT "GOTO 0x884";

		Label_2182:
			for(;;) {
				return 10;
		}
			cvector var_104_cvector;
			func_2080(var_53_float, var_104_cvector, 2.6179938);
			var_104_cvector = var_52_cvector;
			if((var_52_cvector | var_52_cvector) >= 2500.0) {
				cvector var_108_cvector;
				func_2461(var_108_cvector);
				var_1_object = var_108_cvector + var_52_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_2152; //@nz

	}
}


// @pe
void func_3647(object var_110_object)
{
	object var_111_object;
	var_110_object = var_111_object;
	TaskCall(7);
	func_1916(var_112_object, var_113_cvector, var_114_bool, var_111_object);
	TaskReturn();
}


// @pe
void func_3140(object var_38_object)
{
	int var_39_int;
	func_3051(var_39_int);
	if(var_39_int == 1)
		@WorkWithCorpse(var_38_object);
	else
		@Barter(var_38_object);
	
}


void func_3655(bool var_30_bool, object var_31_object, object var_32_object, float var_33_float)
{
	object var_39_object;
	var_32_object = var_39_object;
	bool var_38_bool;
	func_2486(var_38_bool, var_39_object, "class");
	if(!var_38_bool) { //@nz
		var_30_bool = false;
		return 4;
	}
	string var_36_string;
	var_32_object->GetProperty("class", var_36_string);
	if(var_36_string == "rat") {
		var_30_bool = false;
		return 4;
	EMIT "GOTO 0xe65";
	}
	if(var_36_string == "rat_big") {
		var_30_bool = false;
		return 4;
	EMIT "GOTO 0xe65";
	}
	if(var_36_string == "dog") {
		var_30_bool = false;
		return 4;
	}
	bool var_37_bool;
	@CanSee(var_37_bool, var_31_object);
	bool var_55_bool = true;
	if(var_37_bool != 1) {
		float var_57_float; object var_58_object;
		var_31_object = var_58_object;
		func_2473(var_57_float, var_58_object);
		var_66_bool = var_57_float <= (var_33_float * var_33_float);
		if(var_66_bool != 1)
			var_55_bool = false;
	}
	if(var_55_bool != 0) {
		var_30_bool = true;
		return 4;
	}
	@CanSee(var_37_bool, var_32_object);
	bool var_67_bool = true;
	if(var_37_bool != 1) {
		float var_69_float; object var_70_object;
		var_32_object = var_70_object;
		func_2473(var_69_float, var_70_object);
		var_72_bool = var_69_float <= (var_33_float * var_33_float);
		if(var_72_bool != 1)
			var_67_bool = false;
	}
	if(var_67_bool != 0) {
		var_30_bool = true;
		return 4;
	}
	var_30_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_117_object, object var_118_object)
{
	var_0_object = var_118_object;
	var_1_object = var_117_object;
	var_3_string = false;
	if(1 != 0) {
		func_217(var_118_object, "Neutral");
		var_0_object->SetMessage(538167); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(538168, -1, 40043); //@t
		bool var_140_bool = false;
		bool var_141_bool;
		func_2979(var_141_bool, var_1_object);
		if(var_141_bool != 0) {
			bool var_152_bool;
			func_2955(var_1_object);
			if(var_152_bool != 0)
				var_140_bool = true;
		}
		if(var_140_bool != 0)
			var_0_object->AddReply(538169, 40045, 40044); //@t
		bool var_163_bool = false;
		bool var_164_bool = false;
		bool var_165_bool;
		func_2979(var_165_bool, var_1_object);
		if(var_165_bool != 0) {
			bool var_167_bool;
			func_2999(var_167_bool, var_1_object);
			if(var_167_bool != 0)
				var_164_bool = true;
		}
		if(var_164_bool != 0) {
			bool var_178_bool;
			func_2955(var_1_object);
			if(var_178_bool != 0)
				var_163_bool = true;
		}
		if(var_163_bool != 0)
			var_0_object->AddReply(538179, 40055, 40054); //@t
		bool var_183_bool = false;
		bool var_184_bool;
		func_2989(var_184_bool, var_1_object);
		if(var_184_bool != 0) {
			bool var_190_bool;
			func_2955(var_1_object);
			if(var_190_bool != 0)
				var_183_bool = true;
		}
		if(var_183_bool != 0)
			var_0_object->AddReply(538190, 40067, 40066); //@t
		bool var_195_bool = true;
		bool var_196_bool;
		func_2955(var_1_object);
		if(var_196_bool != 1) {
			bool var_198_bool;
			func_2967(var_1_object);
			if(var_198_bool != 1)
				var_195_bool = false;
		}
		if(var_195_bool != 0)
			var_0_object->AddReply(538204, -1, 40081); //@t
		var_0_object->AddReply(538205, -1, 40082); //@t
		goto Label_187;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_187:
	bool var_210_bool;
	func_3981(var_210_bool);
	if(var_210_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2790(var_2_object);
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


void func_1105(float var_42_float)
{
	float var_44_float;
	@GetCameraFarDistance(var_44_float);
	var_44_float = var_42_float;
}


void func_3153(int var_120_int, int var_121_int)
{
	if(var_120_int > var_121_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_133_int = 0;
	if(var_120_int != var_121_int) {
		@irand(var_133_int, (var_121_int - var_120_int));
	} else if(var_120_int == 0) {
		return 4;
	}
	var_133_int += var_120_int;
	if(var_133_int == 0)
		return 4;
	int var_141_int;
	func_3400(var_141_int, "Money");
	bool var_134_bool;
	@AddItem(var_134_bool, var_141_int, 0, var_133_int);
	
}


void func_1117(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1124(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_614(object var_23_object)
{
	object var_24_object;
	var_23_object = var_24_object;
	func_647(var_24_object);
	object var_104_object;
	var_23_object = var_104_object;
	func_4020(var_104_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1131(bool var_52_bool)
{
	var_52_bool = false;
}


void func_1133(object var_46_object, cvector var_47_cvector)
{
	object var_49_object;
	@FindShiftedPathTo(var_49_object, var_47_cvector);
	var_49_object = var_46_object;
}
EMIT "Stack[-1] = 0";


void func_3184(string var_234_string)
{
	object var_238_object;
	@CreateInvItem(var_238_object);
	var_238_object->SetItemName(var_234_string);
	var_238_object->SetProperty("Organ", 1);
	int var_239_int;
	var_238_object->GetItemID(var_239_int);
	bool var_240_bool;
	@AddItem(var_240_bool, var_238_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_2675(object var_27_object, cvector var_30_cvector, cvector var_31_cvector)
{
	object var_34_object;
	@GetScene(var_34_object);
	object var_35_object;
	@AddActorByType(var_35_object, "scripted", var_34_object, var_30_cvector, var_31_cvector, "blood_dir.xml");
	object var_38_object;
	var_27_object = var_38_object;
	func_2563(var_38_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1664(object var_76_object)
{
	@Face(var_76_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_86_object;
	func_1729(var_78_cvector, var_79_bool, var_86_object, var_86_object);
}


void func_2689(object var_97_object)
{
	cvector var_101_cvector;
	var_97_object->GetPosition(var_101_cvector);
	cvector var_102_cvector;
	@GetPosition(var_102_cvector);
	cvector var_103_cvector = var_101_cvector - var_102_cvector;
	var_104_float = GetByIndex(var_103_cvector, 0);
	var_105_float = GetByIndex(var_103_cvector, 2);
	@RotateAsync(var_104_float, var_105_float);
}


void func_3201(void)
{
	int var_228_int;
	func_3051(var_228_int);
	if(var_228_int != 1) {
	}
	func_3184("liver");
	func_3184("kidney");
	func_3184("heart");
	func_3184("blood");
}


void func_647(object var_24_object)
{
	cvector var_35_cvector; cvector var_36_cvector; cvector var_37_cvector; cvector var_38_cvector; string var_39_string; object var_40_object; bool var_41_bool; bool var_42_bool; float var_43_float; cvector var_44_cvector;
	if(var_24_object == null) {
		func_738("fdie");
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
		func_2821(var_99_string);
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
void func_3721(int var_24_int)
{
	var_24_int = 0;
}


void func_2700(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


// @pe
void func_3724(void)
{
}


// @pe
void func_3726(int var_208_int)
{
	var_208_int = 0;
}


void func_2705(bool var_57_bool, object var_58_object, float var_59_float)
{
	cvector var_70_cvector; bool var_77_bool;
	var_58_object->GetPosition(var_70_cvector);
	float var_69_float;
	var_58_object->GetEyesHeight(var_69_float);
	var_78_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (var_78_float + var_69_float);
	cvector var_71_cvector;
	@GetPosition(var_71_cvector);
	@GetEyesHeight(var_69_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	SetByIndex(var_71_cvector, 1) = (var_79_float + var_69_float);
	cvector var_72_cvector = var_70_cvector - var_71_cvector;
	var_80_float = GetByIndex(var_72_cvector, 1);
	SetByIndex(var_72_cvector, 1) = (float)0;
	var_82_float = sqrt(var_72_cvector | var_72_cvector);
	var_72_cvector /= var_82_float;
	cvector var_73_cvector = -var_72_cvector;
	cvector var_84_cvector;
	func_2868(var_84_cvector, (var_73_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_74_cvector = ((var_72_cvector * var_59_float) + (var_84_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_76_bool;
	@IsOverrideActive(var_76_bool);
	if(var_76_bool != 0)
		var_57_bool = false;
	@StopWorld();
	@CameraTransit((var_71_cvector + var_74_cvector), var_73_cvector);
	var_97_float = GetByIndex(var_74_cvector, 0);
	var_98_float = GetByIndex(var_74_cvector, 2);
	@Rotate(var_97_float, var_98_float);
	bool var_99_bool;
	func_3981(var_99_bool);
	if(var_99_bool != 0) {
	} else {
		@HasAnimationTrack(var_77_bool, "head");
		if(var_77_bool == 0) goto Label_2767;
		@LookAsyncCamera("head");
	}
Label_2767:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_57_bool = true;
	
}


// @pe
void func_3729(void)
{
}


// @pe
void func_3731(int var_24_int)
{
	var_24_int = 2;
}


// @pe
void func_3734(object var_32_object)
{
	object var_33_object;
	var_32_object = var_33_object;
	func_3987(var_33_object);
}


void func_3225(bool var_114_bool)
{
	int var_117_int; bool var_118_bool;
	if(var_114_bool != 0) {
		int var_123_int;
		func_2933(var_123_int);
		func_3153(0, (100 + (var_123_int * 100)));
		@irand(var_117_int, 8);
		if(var_117_int == 0) {
			int var_151_int;
			func_3400(var_151_int, "lemon");
			@AddItem(var_118_bool, var_151_int, 0, 1);
		} else {
				if(var_117_int == 1) {
					int var_157_int;
					func_3400(var_157_int, "rusk");
					@AddItem(var_118_bool, var_157_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_117_int == 2) {
				int var_163_int;
				func_3400(var_163_int, "hook");
				@AddItem(var_118_bool, var_163_int, 0, 1);
			} else if(var_117_int == 4) {
				int var_169_int;
				func_3400(var_169_int, "syringe");
				@AddItem(var_118_bool, var_169_int, 0, 1);
			} else if(var_117_int == 5) {
				int var_175_int;
				func_3400(var_175_int, "watch");
				@AddItem(var_118_bool, var_175_int, 0, 1);
			} else if(var_117_int == 6) {
				int var_181_int;
				func_3400(var_181_int, "razor");
				@AddItem(var_118_bool, var_181_int, 0, 1);
			}
	}
		int var_188_int;
		func_2933(var_188_int);
		func_3153(0, (50 + (var_188_int * 50)));
		@irand(var_117_int, 7);
		if(var_117_int == 0) {
			int var_194_int;
			func_3400(var_194_int, "beads");
			@AddItem(var_118_bool, var_194_int, 0, 1);
		} else if(var_117_int == 1) {
			int var_200_int;
			func_3400(var_200_int, "bracelet");
			@AddItem(var_118_bool, var_200_int, 0, 1);
		} else if(var_117_int == 2) {
			int var_206_int;
			func_3400(var_206_int, "ear_ring");
			@AddItem(var_118_bool, var_206_int, 0, 1);
		} else if(var_117_int == 3) {
			int var_212_int;
			func_3400(var_212_int, "gold_ring");
			@AddItem(var_118_bool, var_212_int, 0, 1);
		} else if(var_117_int == 4) {
			int var_218_int;
			func_3400(var_218_int, "silver_ring");
			@AddItem(var_118_bool, var_218_int, 0, 1);
		} else if(var_117_int == 5) {
			int var_224_int;
			func_3400(var_224_int, "flower");
			@AddItem(var_118_bool, var_224_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_3740(void)
{
}


void func_3741(bool var_27_bool, object var_28_object)
{
	bool var_30_bool;
	@CanSee(var_30_bool, var_28_object);
	var_30_bool = var_27_bool;
}


// @pe
void func_3746(object var_39_object)
{
	object var_40_object;
	var_39_object = var_40_object;
	TaskCall(8);
	func_2110(var_41_object, var_42_cvector, var_43_bool, var_40_object);
	TaskReturn();
}


void func_1699(object var_0_object, cvector var_35_cvector, float var_36_float)
{
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	var_0_object->GetPosition(var_44_cvector); //@t
	cvector var_45_cvector;
	@GetDirection(var_45_cvector);
	cvector var_49_cvector;
	cvector var_51_cvector;
	func_2868(var_51_cvector, (var_43_cvector - var_44_cvector));
	func_2868(var_49_cvector, (var_51_cvector + (var_45_cvector * 0.75)));
	cvector var_46_cvector;
	var_49_cvector = var_46_cvector;
	cvector var_47_cvector;
	float var_48_float;
	@FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, 32, 7000.0);
	if((var_48_float - 100) < 0)
		var_48_float = 0;
	var_35_cvector = var_47_cvector * var_48_float;
}


void func_3754(bool var_36_bool, object var_37_object)
{
	bool var_39_bool;
	@CanSee(var_39_bool, var_37_object);
	var_36_bool = true;
	if(var_39_bool != 1) {
		float var_41_float; object var_42_object;
		var_37_object = var_42_object;
		func_2473(var_41_float, var_42_object);
		var_50_bool = var_41_float <= 4000000;
		if(var_50_bool != 1)
			var_36_bool = false;
	}
}


// @pe
void func_3769(object var_138_object)
{
	object var_139_object;
	var_138_object = var_139_object;
	TaskCall(9);
	func_2304(var_140_object, var_141_cvector, var_142_bool, var_139_object);
	TaskReturn();
}


void func_2235(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_1729(object var_0_object, object var_1_object, object var_2_object, object var_86_object)
{
	float var_93_float; cvector var_95_cvector; float var_96_float;
	cvector var_97_cvector;
	func_1699(var_96_float, var_97_cvector, 1.7453294);
	cvector var_92_cvector;
	var_97_cvector = var_92_cvector;
	if((var_92_cvector | var_92_cvector) < 2500.0) {
		cvector var_129_cvector;
		func_1699(var_96_float, var_129_cvector, 2.6179938);
		var_129_cvector = var_92_cvector;
		var_93_float = var_92_cvector | var_92_cvector;
		if(var_93_float < 2500.0) {
			var_134_float = sqrt(var_93_float);
			@Trace("Can't retreat, distance: " + var_134_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_137_float = GetByIndex(var_92_cvector, 0);
	var_138_float = GetByIndex(var_92_cvector, 2);
	@Rotate(var_137_float, var_138_float);
	cvector var_139_cvector;
	func_2461(var_139_cvector);
	@SetTimer(120, 0.5);
	
Label_1771:
	bool var_94_bool;
	@MovePoint((var_139_cvector + var_92_cvector), 1, var_94_bool);
	if(var_94_bool != 0) {
		if(var_86_object == null) {
			goto Label_1801;
		EMIT "GOTO 0x707";

		Label_1801:
			for(;;) {
				return 10;
		}
			cvector var_147_cvector;
			func_1699(var_96_float, var_147_cvector, 2.6179938);
			var_147_cvector = var_95_cvector;
			if((var_95_cvector | var_95_cvector) >= 2500.0) {
				cvector var_151_cvector;
				func_2461(var_151_cvector);
				var_1_object = var_151_cvector + var_95_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1771; //@nz

	}
}


// @pe
void func_3777(bool var_53_bool, object var_54_object)
{
	object var_56_object;
	var_54_object = var_56_object;
	bool var_55_bool;
	func_3754(var_55_bool, var_56_object);
	var_55_bool = var_53_bool;
}


// @pe
void func_3784(object var_206_object)
{
	object var_207_object;
	var_206_object = var_207_object;
	func_3769(var_207_object);
}


void func_2251(object var_0_object, bool var_73_bool)
{
	cvector var_76_cvector;
	@GetDirection(var_76_cvector);
	cvector var_78_cvector;
	func_2466(var_78_cvector, var_0_object);
	cvector var_77_cvector;
	var_78_cvector = var_77_cvector;
	float var_84_float; cvector var_85_cvector; cvector var_86_cvector;
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_2884(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= -0.34202012;
}


// @pe
void func_3790(bool var_29_bool)
{
	var_29_bool = false;
}


// @pe
void func_3793(void)
{
}


void func_3795(object var_233_object)
{
	int var_266_int; int var_267_int; object var_268_object; int var_269_int; bool var_270_bool; int var_271_int; float var_272_float; int var_273_int; int var_278_int; int var_279_int; int var_282_int; int var_283_int; int var_284_int; object var_285_object;
	object var_286_object;
	func_2878(var_286_object);
	object var_260_object;
	var_286_object = var_260_object;
	object var_261_object;
	@CreateIntVector(var_261_object);
	object var_262_object;
	@CreateIntVector(var_262_object);
	object var_263_object;
	@CreateIntVector(var_263_object);
	int var_264_int;
	var_233_object->GetSubContainerCount(var_264_int);
	int var_265_int = 0;
	
	while(var_265_int < var_264_int) {
		var_233_object->GetItemCount(var_266_int, var_265_int);
		var_267_int = 0;

		while(var_267_int < var_266_int) {
			var_233_object->GetItem(var_268_object, var_267_int, var_265_int);
			var_268_object->GetItemID(var_269_int);
			@HasInvItemProperty(var_270_bool, var_269_int, "HasDurability");
			if(var_270_bool != 0) {
				var_268_object->HasProperty(var_270_bool, "durability");
				if(var_270_bool != 0) {
					var_268_object->GetProperty(var_271_int, "durability");
					bool var_296_bool = false;
					if(var_271_int < 100) {
						bool var_299_bool; object var_300_object;
						func_3942(var_299_bool, var_300_object);
						if(var_299_bool != 0)
							var_296_bool = true;
					}
					if(var_296_bool != 0) {
						var_260_object->add(var_300_object);
						var_261_object->add(var_265_int);
						var_262_object->add(var_267_int);
						int var_311_int; object var_312_object;
						var_268_object = var_312_object;
						func_3062(var_311_int, var_312_object, 0);
						var_311_int = var_272_float;
						var_364_bool = !(((var_272_float * (1.0 + ((2.0 * var_271_int) / 100.0))) * (100 - var_271_int)) / 300); //@nz
						if(var_364_bool != 0)
							var_273_int = 1;
						var_263_object->add(var_273_int);
					}
				}
			}
			var_268_object = null;
			var_267_int += 1;
		}

		var_265_int += 1;
	}
	
	object var_274_object;
	@CreateIntVector(var_274_object);
	@ChooseItem(var_260_object, var_274_object, var_263_object, "repair.xml");
	int var_275_int;
	var_274_object->size(var_275_int);
	if(!var_275_int) //@nz
		return 52;
	int var_276_int = 0;
	int var_277_int = 0;
	
	while(var_277_int < var_275_int) {
		var_274_object->get(var_278_int, var_277_int);
		var_263_object->get(var_279_int, var_278_int);
		var_276_int += var_279_int;
		var_277_int += 1;
	}
	
	int var_280_int;
	var_233_object->GetProperty("money", var_280_int);
	var_280_int -= var_276_int;
	if(var_280_int < 0)
		return 52;
	var_233_object->SetProperty("money", var_280_int);
	int var_281_int = 0;
	
	while(var_281_int < var_275_int) {
		var_274_object->get(var_282_int, var_281_int);
		var_261_object->get(var_283_int, var_282_int);
		var_262_object->get(var_284_int, var_282_int);
		var_233_object->GetItem(var_285_object, var_284_int, var_283_int);
		var_285_object->SetProperty("durability", 100);
		var_233_object->SetItem(var_285_object, 1, var_284_int, var_283_int);
		var_285_object = null;
		var_281_int += 1;
	}
	
}
EMIT "Stack[-12] = 0";
EMIT "Stack[-23] = 0";
EMIT "Stack[-24] = 0";
EMIT "Stack[-25] = 0";
EMIT "Stack[-26] = 0";


void func_2773(void)
{
	bool var_226_bool;
	@CameraSwitchToNormal();
	bool var_227_bool;
	func_3981(var_227_bool);
	if(var_227_bool != 0) {
	} else {
		@HasAnimationTrack(var_226_bool, "head");
		if(var_226_bool == 0) goto Label_2789;
		@UnlookAsync("head");
	}
Label_2789:
	
}


// @pe
void func_217(object var_2_object, string var_124_string)
{
	bool var_125_bool;
	func_3981(var_125_bool);
	if(!var_125_bool) //@nz
		return 0;
	if(var_124_string == var_2_object)
		return 0;
	string var_128_string; bool var_129_bool;
	var_124_string = var_128_string;
	if(var_124_string == "")
		var_129_bool = false;
	else
		var_129_bool = true;
	func_2797(var_128_string, var_129_bool);
	var_2_object = var_124_string;
	
}


// @pe
void func_738(string var_46_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_47_string;
	var_46_string = var_47_string;
	func_2821(var_47_string);
	@PlayAnimation("all", var_46_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_46_string);
	@RemoveEnvelope();
}


void func_2274(object var_0_object, cvector var_35_cvector, float var_36_float)
{
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	var_0_object->GetPosition(var_44_cvector); //@t
	cvector var_45_cvector;
	@GetDirection(var_45_cvector);
	cvector var_49_cvector;
	cvector var_51_cvector;
	func_2868(var_51_cvector, (var_43_cvector - var_44_cvector));
	func_2868(var_49_cvector, (var_51_cvector + (var_45_cvector * 0.75)));
	cvector var_46_cvector;
	var_49_cvector = var_46_cvector;
	cvector var_47_cvector;
	float var_48_float;
	@FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, 32, 7000.0);
	if((var_48_float - 100) < 0)
		var_48_float = 0;
	var_35_cvector = var_47_cvector * var_48_float;
}


void func_2790(string var_212_string)
{
	float var_215_float; float var_216_float;
	@lshGetAnimTimes(var_212_string, var_215_float, var_216_float);
	@lshPlayAnimation(var_215_float, var_216_float, false);
}


void func_2797(string var_128_string, bool var_129_bool)
{
	float var_134_float; float var_135_float;
	@lshGetAnimTimes(var_128_string, var_134_float, var_135_float);
	@lshPlayAnimation(var_134_float, var_135_float, var_129_bool);
}


void func_2803(object var_90_object)
{
	float var_93_float;
	var_90_object->GetEyesHeight(var_93_float);
	cvector var_94_cvector = [0.0, 0.0, 0.0];
	var_95_float = GetByIndex(var_94_cvector, 1);
	var_93_float = var_95_float;
	SetByIndex(var_94_cvector, 1) = var_95_float;
	@LookAsync(var_90_object, "head", var_94_cvector);
}


void func_2814(void)
{
	bool var_24_bool;
	func_3981(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_2304(object var_0_object, object var_1_object, object var_2_object, object var_139_object)
{
	float var_149_float; cvector var_151_cvector; float var_152_float;
	cvector var_153_cvector;
	func_2274(var_152_float, var_153_cvector, 1.7453294);
	cvector var_148_cvector;
	var_153_cvector = var_148_cvector;
	if((var_148_cvector | var_148_cvector) < 2500.0) {
		cvector var_180_cvector;
		func_2274(var_152_float, var_180_cvector, 2.6179938);
		var_180_cvector = var_148_cvector;
		var_149_float = var_148_cvector | var_148_cvector;
		if(var_149_float < 2500.0) {
			var_185_float = sqrt(var_149_float);
			@Trace("Can't retreat, distance: " + var_185_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_188_float = GetByIndex(var_148_cvector, 0);
	var_189_float = GetByIndex(var_148_cvector, 2);
	@Rotate(var_188_float, var_189_float);
	cvector var_190_cvector;
	func_2461(var_190_cvector);
	@SetTimer(120, 0.5);
	
Label_2346:
	bool var_150_bool;
	@MovePoint((var_190_cvector + var_148_cvector), 1, var_150_bool);
	if(var_150_bool != 0) {
		if(var_139_object == null) {
			goto Label_2376;
		EMIT "GOTO 0x946";

		Label_2376:
			for(;;) {
				return 10;
		}
			cvector var_196_cvector;
			func_2274(var_152_float, var_196_cvector, 2.6179938);
			var_196_cvector = var_151_cvector;
			if((var_151_cvector | var_151_cvector) >= 2500.0) {
				cvector var_200_cvector;
				func_2461(var_200_cvector);
				var_1_object = var_200_cvector + var_151_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_2346; //@nz

	}
}


void func_2821(string var_47_string)
{
	bool var_56_bool; int var_57_int; bool var_58_bool; int var_59_int; bool var_60_bool; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	@IsExisting3DSound(var_56_bool, var_47_string);
	if(!var_56_bool) { //@nz
		var_57_int = 0;

		for(;;) {
			@IsExisting3DSound(var_58_bool, (var_47_string + (var_57_int + 1)));
			if(!var_58_bool) { //@nz
				break;
			Label_2841:
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
	if(var_69_bool == 0) goto Label_2841;
}


void func_785(void)
{
	bool var_23_bool;
	func_2700(var_23_bool);
	if(!var_23_bool) //@nz
		func_3740();
}


void func_1303(void)
{
	int var_63_int; int var_64_int; bool var_65_bool; float var_66_float; bool var_67_bool;
	@WaitForAnimEnd();
	bool var_68_bool;
	func_2700(var_68_bool);
	if(!var_68_bool) //@nz
		return 14;
	int var_70_int;
	func_3585(var_70_int);
	int var_61_int;
	var_70_int = var_61_int;
	int var_62_int = 0;
	
	for(;;) {
		bool var_83_bool = false;
		if(var_62_int < 5) {
			bool var_86_bool;
			func_2700(var_86_bool);
			if(var_86_bool != 0)
				var_83_bool = true;
		}
		if(var_83_bool != 0) {
			@irand(var_63_int, 3);
			if(var_63_int == 0) {
				if(var_61_int == 0) goto Label_1350;
				@irand(var_64_int, var_61_int);
				string var_92_string; int var_93_int;
				var_64_int = var_93_int;
				func_3578(var_92_string, var_93_int);
				@PlayAnimation("all", var_92_string);
				@WaitForAnimEnd(var_65_bool);
				if(!var_65_bool) { //@nz
				} else {
			} else {
			if(var_63_int == 1) {
				@rand(var_66_float, 4);
				@Sleep((var_66_float + 1), var_67_bool);
				if(!var_67_bool) { //@nz
					goto Label_1379;
				}
			} else if(var_62_int != 0) {
				goto Label_1379;
			}
			}
					bool var_95_bool;
					func_1382(var_95_bool);
					var_96_bool = !var_95_bool; //@nz
					if(var_96_bool == 0) goto Label_1374;
			}
		}
	Label_1379:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1374:
		@ResetAAS();
		var_62_int += 1;
	}
	
}


void func_2862(object var_109_object)
{
	object var_111_object;
	@self(var_111_object);
	var_111_object = var_109_object;
}
EMIT "Stack[-1] = 0";


void func_2868(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_62_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_62_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_62_float;
}


void func_1854(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_2878(object var_286_object)
{
	object var_288_object;
	@CreateObjectVector(var_288_object);
	var_288_object = var_286_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2884(float var_84_float, cvector var_85_cvector, cvector var_86_cvector)
{
	var_91_float = sqrt((var_85_cvector | var_85_cvector) * (var_86_cvector | var_86_cvector));
	var_84_float = (var_85_cvector | var_86_cvector) / var_91_float;
}


void func_3400(int var_141_int, string var_142_string)
{
	int var_144_int;
	@GetInvItemByName(var_144_int, var_142_string);
	var_144_int = var_141_int;
}


// @pe
void func_2892(float var_74_float, cvector var_75_cvector, cvector var_76_cvector)
{
	var_77_float = GetByIndex(var_75_cvector, 0);
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_80_float = GetByIndex(var_75_cvector, 2);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_74_float = (var_77_float * var_78_float) + (var_80_float * var_81_float);
}


// @pe
void func_3405(object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	TaskCall(2);
	func_614(var_23_object);
	TaskReturn();
}


void func_1870(object var_0_object, bool var_73_bool)
{
	cvector var_76_cvector;
	@GetDirection(var_76_cvector);
	cvector var_78_cvector;
	func_2466(var_78_cvector, var_0_object);
	cvector var_77_cvector;
	var_78_cvector = var_77_cvector;
	float var_84_float; cvector var_85_cvector; cvector var_86_cvector;
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_2884(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= -0.34202012;
}


// @pe
void func_2901(float var_83_float, cvector var_84_cvector)
{
	var_85_float = GetByIndex(var_84_cvector, 0);
	var_86_float = GetByIndex(var_84_cvector, 0);
	var_88_float = GetByIndex(var_84_cvector, 2);
	var_89_float = GetByIndex(var_84_cvector, 2);
	var_83_float = sqrt((var_85_float * var_86_float) + (var_88_float * var_89_float));
}


void func_1886(object var_0_object, cvector var_35_cvector, float var_36_float)
{
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	var_0_object->GetPosition(var_44_cvector); //@t
	cvector var_45_cvector;
	@GetDirection(var_45_cvector);
	cvector var_49_cvector;
	cvector var_51_cvector;
	func_2868(var_51_cvector, (var_43_cvector - var_44_cvector));
	func_2868(var_49_cvector, (var_51_cvector + (var_45_cvector * 0.75)));
	cvector var_46_cvector;
	var_49_cvector = var_46_cvector;
	cvector var_47_cvector;
	float var_48_float;
	@FindLongestDir(var_47_cvector, var_48_float, var_46_cvector, var_36_float, 32, 7000.0);
	if((var_48_float - 100) < 0)
		var_48_float = 0;
	var_35_cvector = var_47_cvector * var_48_float;
}


// @pe
void func_2911(float var_71_float, cvector var_72_cvector, cvector var_73_cvector)
{
	cvector var_75_cvector;
	var_72_cvector = var_75_cvector;
	cvector var_76_cvector;
	var_73_cvector = var_76_cvector;
	float var_74_float;
	func_2892(var_74_float, var_75_cvector, var_76_cvector);
	float var_83_float; cvector var_84_cvector;
	var_72_cvector = var_84_cvector;
	func_2901(var_83_float, var_84_cvector);
	float var_92_float; cvector var_93_cvector;
	var_73_cvector = var_93_cvector;
	func_2901(var_92_float, var_93_cvector);
	var_71_float = var_74_float / (var_83_float * var_92_float);
}


void func_1382(bool var_95_bool)
{
	var_95_bool = true;
}


void func_3942(bool var_299_bool, object var_300_object)
{
	int var_304_int;
	var_300_object->GetItemID(var_304_int);
	bool var_305_bool;
	@HasInvItemProperty(var_305_bool, var_304_int, "Category");
	if(!var_305_bool) //@nz
		var_299_bool = false;
	int var_306_int;
	@GetInvItemProperty(var_306_int, var_304_int, "Category");
	var_299_bool = var_306_int == 1;
}


void func_1384(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1389(object var_0_object, object var_82_object)
{
	var_0_object = var_82_object;
	bool var_89_bool;
	func_1440(var_89_bool);
	cvector var_87_cvector;
	@GetDirection(var_87_cvector);
	cvector var_97_cvector;
	func_2466(var_97_cvector, var_0_object);
	cvector var_88_cvector;
	var_97_cvector = var_88_cvector;
	float var_103_float; cvector var_104_cvector; cvector var_105_cvector;
	var_87_cvector = var_104_cvector;
	var_88_cvector = var_105_cvector;
	func_2911(var_103_float, var_104_cvector, var_105_cvector);
	if(var_103_float < 0) {
		func_2689(var_0_object);
		var_89_bool = true;
	} else {
		@Sleep(1.5, var_89_bool);
	}
	if(var_89_bool != 0) {
		func_2689(var_0_object);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2928(int var_154_int, string var_155_string)
{
	int var_157_int;
	@GetVariable(var_155_string, var_157_int);
	var_157_int = var_154_int;
}


void func_2933(int var_123_int)
{
	float var_125_float;
	@GetGameTime(var_125_float);
	var_123_int = 1 + (var_125_float / 24);
}


// @pe
void func_3958(object var_45_object, object var_48_object)
{
	object var_47_object;
	var_45_object = var_47_object;
	TaskCall(0);
	int var_46_int;
	func_0(var_48_object, var_46_int, var_47_object);
	TaskReturn();
	if(var_48_object == 100) {
		object var_233_object;
		var_45_object = var_233_object;
		func_3795(var_233_object);
	}
}


// @pe
void func_3450(bool var_25_bool, object var_26_object, string var_27_string)
{
	if(var_27_string == "unholster") {
		bool var_30_bool; object var_31_object;
		var_26_object = var_31_object;
		func_3741(var_30_bool, var_31_object);
		var_30_bool = var_25_bool;
		return 0;
	EMIT "GOTO 0xd98";
	}
	if(var_27_string == "player_shot") {
		bool var_36_bool; object var_37_object;
		var_26_object = var_37_object;
		func_3754(var_36_bool, var_37_object);
		var_36_bool = var_25_bool;
		return 0;
	EMIT "GOTO 0xd98";
	}
	if(var_27_string == "battle") {
		bool var_53_bool; object var_54_object;
		var_26_object = var_54_object;
		func_3777(var_53_bool, var_54_object);
		var_53_bool = var_25_bool;
		return 0;
	}
	var_25_bool = false;
}


void func_1916(object var_0_object, object var_1_object, object var_2_object, object var_111_object)
{
	float var_121_float; cvector var_123_cvector; float var_124_float;
	cvector var_125_cvector;
	func_1886(var_124_float, var_125_cvector, 1.7453294);
	cvector var_120_cvector;
	var_125_cvector = var_120_cvector;
	if((var_120_cvector | var_120_cvector) < 2500.0) {
		cvector var_157_cvector;
		func_1886(var_124_float, var_157_cvector, 2.6179938);
		var_157_cvector = var_120_cvector;
		var_121_float = var_120_cvector | var_120_cvector;
		if(var_121_float < 2500.0) {
			var_162_float = sqrt(var_121_float);
			@Trace("Can't retreat, distance: " + var_162_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_165_float = GetByIndex(var_120_cvector, 0);
	var_166_float = GetByIndex(var_120_cvector, 2);
	@Rotate(var_165_float, var_166_float);
	cvector var_167_cvector;
	func_2461(var_167_cvector);
	@SetTimer(120, 0.5);
	
Label_1958:
	bool var_122_bool;
	@MovePoint((var_167_cvector + var_120_cvector), 1, var_122_bool);
	if(var_122_bool != 0) {
		if(var_111_object == null) {
			goto Label_1988;
		EMIT "GOTO 0x7c2";

		Label_1988:
			for(;;) {
				return 10;
		}
			cvector var_175_cvector;
			func_1886(var_124_float, var_175_cvector, 2.6179938);
			var_175_cvector = var_123_cvector;
			if((var_123_cvector | var_123_cvector) >= 2500.0) {
				cvector var_179_cvector;
				func_2461(var_179_cvector);
				var_1_object = var_179_cvector + var_123_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1958; //@nz

	}
}


void func_2429(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_2942(int var_171_int)
{
	float var_173_float;
	@GetGameTime(var_173_float);
	int var_174_int;
	var_173_float = var_174_int;
	var_171_int = var_174_int % 24;
}


void func_3973(int var_105_int)
{
	var_105_int = 515567;
}


// @pe
void func_2950(object var_28_object)
{
	var_28_object->SetReturnValue(100);
}


void func_3975(int var_104_int)
{
	var_104_int = 503352;
}


void func_3977(string var_106_string)
{
	var_106_string = "ui/NPC_Citizen3.png";
}


void func_3979(string var_107_string)
{
	var_107_string = "ui/NPC_Citizen3_b.png";
}


// @pe
void func_2955(bool var_152_bool)
{
	int var_154_int;
	func_2928(var_154_int, "branch");
	if(var_154_int == 0) {
		var_152_bool = true;
		return 0;
	}
	var_152_bool = false;
}


void func_3981(bool var_99_bool)
{
	var_99_bool = false;
}


void func_2445(object var_0_object, bool var_73_bool)
{
	cvector var_76_cvector;
	@GetDirection(var_76_cvector);
	cvector var_78_cvector;
	func_2466(var_78_cvector, var_0_object);
	cvector var_77_cvector;
	var_78_cvector = var_77_cvector;
	float var_84_float; cvector var_85_cvector; cvector var_86_cvector;
	var_76_cvector = var_85_cvector;
	var_77_cvector = var_86_cvector;
	func_2884(var_84_float, var_85_cvector, var_86_cvector);
	var_73_bool = var_84_float >= -0.34202012;
}


void func_3983(void)
{
	var_22_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_3987(object var_33_object)
{
	bool var_35_bool;
	var_36_bool = GlobalVars[0];
	if(var_36_bool != 0) {
		@IsOverrideActive(var_35_bool);
		if(!var_35_bool) { //@nz
			object var_38_object;
			var_33_object = var_38_object;
			func_3140(var_38_object);
		}
	EMIT "GOTO 0xfa4";
	}
	object var_45_object;
	var_33_object = var_45_object;
	func_3958(var_35_bool, var_45_object);
}


// @pe
void func_2967(bool var_198_bool)
{
	int var_200_int;
	func_2928(var_200_int, "branch");
	if(var_200_int == 1)
		var_198_bool = true;
	var_198_bool = false;
}


// @pe
void func_3482(object var_59_object, string var_60_string)
{
	if(var_60_string == "unholster") {
		object var_63_object;
		var_59_object = var_63_object;
		func_3746(var_63_object);
	} else if(var_60_string == "player_shot") {
			object var_138_object;
			var_59_object = var_138_object;
			func_3769(var_138_object);
	}
Label_3506:
	for(;;) {

	}
	
	if(!(var_60_string == "battle")) goto Label_3506;
	object var_206_object;
	var_59_object = var_206_object;
	func_3784(var_206_object);
}


void func_2461(cvector var_93_cvector)
{
	cvector var_95_cvector;
	@GetPosition(var_95_cvector);
	var_95_cvector = var_93_cvector;
}


void func_1440(object var_0_object)
{
	func_2803(var_0_object);
}


void func_2466(cvector var_55_cvector, object var_56_object)
{
	cvector var_59_cvector;
	@GetPosition(var_59_cvector);
	cvector var_60_cvector;
	var_56_object->GetPosition(var_60_cvector);
	var_55_cvector = var_60_cvector - var_59_cvector;
}


// @pe
void func_2979(bool var_141_bool, object var_142_object)
{
	object var_144_object;
	var_142_object = var_144_object;
	func_3009(var_144_object);
	bool var_143_bool;
	if(var_143_bool != 0) {
		var_141_bool = true;
		return 0;
	}
	var_141_bool = false;
}


void func_4005(bool var_66_bool)
{
	float var_67_float;
	func_3126(var_67_float);
	var_66_bool = var_67_float > 0.7;
}


void func_2473(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


// @pe
void func_4011(bool var_26_bool, object var_27_object, object var_28_object)
{
	object var_31_object;
	var_27_object = var_31_object;
	object var_32_object;
	var_28_object = var_32_object;
	bool var_30_bool;
	func_3655(var_30_bool, var_31_object, var_32_object, 700.0);
	var_30_bool = var_26_bool;
}


// @pe
void func_2989(bool var_184_bool, object var_185_object)
{
	object var_187_object;
	var_185_object = var_187_object;
	func_3016(var_187_object);
	bool var_186_bool;
	if(var_186_bool != 0) {
		var_184_bool = true;
		return 0;
	}
	var_184_bool = false;
}


void func_2481(bool var_105_bool, object var_106_object)
{
	bool var_108_bool;
	@IsPlayerActor(var_106_object, var_108_bool);
	var_108_bool = var_105_bool;
}


void func_3507(bool var_22_bool, object var_23_object)
{
	bool var_25_bool;
	bool var_26_bool = false;
	bool var_27_bool; object var_28_object;
	var_23_object = var_28_object;
	func_3741(var_27_bool, var_28_object);
	if(var_27_bool != 0) {
		bool var_31_bool; object var_32_object;
		func_2481(var_31_bool, var_32_object);
		if(var_31_bool != 0)
			var_26_bool = true;
	}
	if(var_26_bool != 0) {
		var_32_object->IsWeaponHolstered(var_25_bool);
		if(!var_25_bool) //@nz
			var_22_bool = true;
	}
	var_22_bool = false;
}


// @pe
void func_4020(object var_104_object)
{
	bool var_105_bool; object var_106_object;
	func_2481(var_105_bool, var_106_object);
	if(var_105_bool != 0) {
		object var_109_object;
		func_2862(var_109_object);
		@ReportReputationChange(var_106_object, var_109_object, -0.1, true);
		func_3225(false);
	}
	func_3201();
	var_248_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_2486(bool var_50_bool, object var_51_object, string var_52_string)
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


// @pe
void func_2999(bool var_167_bool, object var_168_object)
{
	object var_170_object;
	var_168_object = var_170_object;
	func_3023(var_170_object);
	bool var_169_bool;
	if(var_169_bool != 0) {
		var_167_bool = true;
		return 0;
	}
	var_167_bool = false;
}


// @pe
void func_3009(bool var_143_bool)
{
	int var_145_int;
	func_2933(var_145_int);
	var_143_bool = var_145_int == 1;
}


void func_2498(bool var_43_bool, object var_44_object)
{
	bool var_46_bool;
	var_44_object->IsDead(var_46_bool);
	var_46_bool = var_43_bool;
}


void func_2503(bool var_32_bool, object var_33_object)
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
		func_2498(var_43_bool, var_44_object);
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
void func_3016(bool var_186_bool)
{
	int var_188_int;
	func_2933(var_188_int);
	var_186_bool = var_188_int == 2;
}


// @pe
void func_3530(object var_38_object)
{
	object var_39_object;
	var_38_object = var_39_object;
	func_3746(var_39_object);
}


// @pe
void func_3023(bool var_169_bool)
{
	int var_171_int;
	func_2942(var_171_int);
	if(var_171_int >= 12)
		var_169_bool = true;
	var_169_bool = false;
}


// @pe
void func_3536(object var_24_object)
{
	bool var_25_bool; object var_26_object;
	func_2481(var_25_bool, var_26_object);
	if(var_25_bool != 0) {
		object var_29_object;
		func_2862(var_29_object);
		@ReportReputationChange(var_26_object, var_29_object, -0.05);
	}
}


void func_981(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_1117(var_20_cvector, var_21_bool);
}


void func_3034(int var_108_int)
{
	int var_110_int;
	@GetVariable("branch", var_110_int);
	if(var_110_int == 0) {
		var_108_int = 1;
		return 2;
	EMIT "GOTO 0xbe9";
	}
	if(var_110_int == 1) {
		var_108_int = 2;
		return 2;
	}
	var_108_int = 3;
}


void func_3549(bool var_22_bool, string var_23_string)
{
	object var_25_object;
	if(var_23_string == "heal") {
		@FindActor(var_25_object, "player");
		bool var_29_bool; object var_30_object;
		var_25_object = var_30_object;
		func_3790(var_30_object);
		var_29_bool = var_22_bool;
	EMIT "Stack[-1] = 0";
	}
	var_22_bool = false;
}


void func_989(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_1124(var_25_bool, var_26_int);
}


void func_2539(bool var_28_bool, object var_29_object)
{
	object var_33_object;
	var_29_object = var_33_object;
	bool var_32_bool;
	func_2503(var_32_bool, var_33_object);
	if(!var_32_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_50_bool; object var_51_object;
	func_2486(var_50_bool, var_51_object, "noaccess");
	if(!var_50_bool) { //@nz
		var_28_bool = true;
		return 2;
	}
	int var_31_int;
	var_51_object->GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == 0;
}


void func_3051(int var_228_int)
{
	int var_230_int;
	@GetVariable("branch", var_230_int);
	var_230_int = var_228_int;
}


void func_3565(string var_33_string)
{
	object var_35_object;
	if(var_33_string == "heal") {
		@FindActor(var_35_object, "player");
		object var_39_object;
		var_35_object = var_39_object;
		func_3793();
		var_35_object = null;
	}
}


void func_1006(object var_2_object, object var_22_object)
{
	bool var_27_bool; object var_28_object;
	func_2539(var_27_bool, var_28_object);
	if(!var_27_bool) //@nz
		return 4;
	if(var_2_object != 0)
		return 4;
	bool var_25_bool;
	@IsPlayerActor(var_28_object, var_25_bool);
	if(!var_25_bool) //@nz
		return 4;
	int var_64_int; object var_65_object;
	var_22_object = var_65_object;
	func_3602(var_65_object);
	int var_26_int;
	var_64_int = var_26_int;
	if(var_26_int > 0) {
		if(var_26_int > 1)
			func_989(var_26_int);
		object var_81_object;
		var_22_object = var_81_object;
		func_3611(var_81_object);
		var_2_object = true;
		@SetTimer(110, 10.0);
	}
}


void func_3057(int var_334_int, object var_335_object)
{
	int var_337_int;
	var_335_object->GetItemID(var_337_int);
	var_337_int = var_334_int;
}


void func_3062(int var_311_int, object var_312_object, int var_313_int)
{
	int var_321_int; int var_322_int; int var_323_int; string var_324_string; bool var_325_bool; bool var_326_bool; int var_327_int;
	if(var_313_int == 0) {
		int var_330_int;
		func_2933(var_330_int);
		var_330_int = var_321_int;
		var_323_int = 1;

		for(;;) {
			if(var_323_int <= var_321_int) {
				var_324_string = "Price";
				if(var_323_int != 1)
					var_324_string += var_323_int;
				int var_334_int; object var_335_object;
				var_312_object = var_335_object;
				func_3057(var_334_int, var_335_object);
				@HasInvItemProperty(var_325_bool, var_334_int, var_324_string);
				if(!var_325_bool) { //@nz
				} else {
				int var_340_int; object var_341_object;
				var_312_object = var_341_object;
				func_3057(var_340_int, var_341_object);
				@GetInvItemProperty(0, var_340_int, var_324_string);
			}
			var_322_int = var_311_int;
			return 14;
	}
		int var_342_int; object var_343_object;
		var_312_object = var_343_object;
		func_3057(var_342_int, var_343_object);
		@HasInvItemProperty(var_326_bool, var_342_int, ("BarterPrice" + var_313_int));
		if(!var_326_bool) //@nz
			return 14;
		int var_347_int; object var_348_object;
		var_312_object = var_348_object;
		func_3057(var_347_int, var_348_object);
		@GetInvItemProperty(var_327_int, var_347_int, ("BarterPrice" + var_313_int));
		if(var_327_int > 0) {
			var_327_int = 0;
			return 14;
		}
		var_311_int = -var_327_int;
		return 14;
		}
		var_323_int += 1;
	}
	
}


void func_2041(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_3578(string var_76_string, int var_77_int)
{
	string var_79_string = "idle";
	if(var_77_int != 0)
		var_79_string += var_77_int;
	var_79_string = var_76_string;
}


