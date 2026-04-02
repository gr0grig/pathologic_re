// @GLOBALS: 0:object:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		bool var_18_bool;
		func_3538(var_18_bool);
		if(var_18_bool != 0)
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int)
	{
		if(1 != 0) {
			func_2532();
			if(var_18_int == 39797) {
				object var_23_object = var_1_object;
				func_2786(var_0_bool);
			}
			if(var_18_int == 39798) {
				object var_28_object = var_1_object;
				func_2786(var_0_bool);
			}
			if(var_17_float == 39796) {
				func_243(var_18_int, "Neutral");
				var_0_bool->SetMessage(537935); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_45_bool;
				func_2803(var_1_object);
				if(!var_45_bool) //@nz
					var_0_bool->AddReply(537936, -1, 39797); //@t
				bool var_57_bool;
				func_2803(var_1_object);
				if(var_57_bool != 0)
					var_0_bool->AddReply(537937, -1, 39798); //@t
				bool var_62_bool;
				func_2791(var_1_object);
				if(var_62_bool != 0)
					var_0_bool->AddReply(537938, 39800, 39799); //@t
				bool var_71_bool;
				func_2803(var_1_object);
				if(var_71_bool != 0)
					var_0_bool->AddReply(537951, 39813, 39812); //@t
				bool var_76_bool;
				func_2815(var_1_object);
				if(var_76_bool != 0)
					var_0_bool->AddReply(537964, -1, 39826); //@t
				bool var_85_bool;
				func_2791(var_1_object);
				if(var_85_bool != 0)
					var_0_bool->AddReply(537965, -1, 39827); //@t
				bool var_90_bool;
				func_2815(var_1_object);
				if(var_90_bool != 0)
					var_0_bool->AddReply(537966, -1, 39828); //@t
				bool var_95_bool;
				func_2803(var_1_object);
				if(var_95_bool != 0)
					var_0_bool->AddReply(537967, -1, 39829); //@t
				return 0;
			}
			if(var_17_float == 39813) {
				func_243(var_18_int, "Neutral");
				var_0_bool->SetMessage(537952); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537953, 39815, 39814); //@t
				var_0_bool->AddReply(537960, 39823, 39822); //@t
				return 0;
			}
			if(var_17_float == 39823) {
				func_243(var_18_int, "Neutral");
				var_0_bool->SetMessage(537961); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537962, -1, 39824); //@t
				var_0_bool->AddReply(537963, -1, 39825); //@t
				return 0;
			}
			if(var_17_float == 39815) {
				func_243(var_18_int, "Neutral");
				var_0_bool->SetMessage(537954); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537955, 39817, 39816); //@t
				var_0_bool->AddReply(537959, 39823, 39820); //@t
				return 0;
			}
			if(var_17_float == 39817) {
				func_243(var_18_int, "Neutral");
				var_0_bool->SetMessage(537956); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537957, -1, 39818); //@t
				var_0_bool->AddReply(537958, -1, 39819); //@t
				return 0;
			}
			if(var_17_float == 39800) {
				func_243(var_18_int, "Neutral");
				var_0_bool->SetMessage(537939); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537940, 39802, 39801); //@t
				var_0_bool->AddReply(537947, 39809, 39808); //@t
				return 0;
			}
			if(var_17_float == 39809) {
				func_243(var_18_int, "Neutral");
				var_0_bool->SetMessage(537948); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537949, -1, 39810); //@t
				var_0_bool->AddReply(537950, -1, 39811); //@t
				return 0;
			}
			if(var_17_float == 39802) {
				func_243(var_18_int, "Neutral");
				var_0_bool->SetMessage(537941); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537942, 39804, 39803); //@t
				var_0_bool->AddReply(537946, -1, 39807); //@t
				return 0;
			}
			if(var_17_float == 39804) {
				func_243(var_18_int, "Neutral");
				var_0_bool->SetMessage(537943); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537944, -1, 39805); //@t
				var_0_bool->AddReply(537945, -1, 39806); //@t
				return 0;
			}
			var_3_object = true;
			bool var_180_bool;
			func_3538(var_180_bool);
			if(var_180_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x10a";
	
	}

}


maintask task_3
{
	// @pe
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int)
	{
		func_3338();
		func_3133();
		func_714(var_15_float, var_16_int);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		if(var_17_int == 1)
			@ResetAAS();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		func_595();
		object var_19_object;
		var_17_int = var_19_object;
		func_3498();
	}

	// @pe
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		object var_19_object;
		var_17_int = var_19_object;
		bool var_18_bool;
		func_3540(var_18_bool, var_19_object);
		if(var_18_bool != 0)
			return 0;
		func_595();
		int var_141_int; object var_142_object;
		var_17_int = var_142_object;
		TaskCall(1);
		func_40(var_143_object, var_141_int, var_142_object);
		TaskReturn();
		if(1000 == var_143_object) {
			object var_309_object;
			var_17_int = var_309_object;
			func_3345(var_309_object);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		object var_19_object;
		var_17_int = var_19_object;
		bool var_18_bool;
		func_3377(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			func_595();
			object var_142_object;
			var_17_int = var_142_object;
			func_3384(var_142_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		object var_19_object;
		var_17_int = var_19_object;
		bool var_18_bool;
		func_3364(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			func_595();
			bool var_142_bool; object var_143_object;
			var_17_int = var_143_object;
			func_2072(var_142_bool, var_143_object);
			if(var_142_bool != 0) {
				object var_144_object;
				var_17_int = var_144_object;
				TaskCall(7);
				func_1950(var_144_object);
				TaskReturn();
			} else {
				object var_156_object;
				var_17_int = var_156_object;
				func_3371(var_156_object);
			}
		}
	
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int, object var_106_object)
		{
		object var_108_object;
		var_106_object = var_108_object;
			bool var_107_bool;
		func_2203(var_107_bool, var_108_object);
		if(!var_107_bool) { //@nz
			object var_136_object;
			var_106_object = var_136_object;
			func_3401(var_136_object);
		}
		func_595();
		object var_152_object;
		var_106_object = var_152_object;
		func_3425(var_152_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		object var_22_object;
		var_18_float = var_22_object;
		bool var_23_bool;
		var_19_int = var_23_bool;
		bool var_20_bool;
		func_3504(var_20_bool, var_21_object, var_22_object, var_23_bool);
		if(var_20_bool != 0) {
			object var_106_object;
			var_17_bool = var_106_object;
			func_681();
		}
	}

}


task task_4
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		object var_18_object;
		var_17_int = var_18_object;
		func_3401(var_18_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		object var_22_object;
		var_18_float = var_22_object;
		bool var_23_bool;
		var_19_int = var_23_bool;
		bool var_20_bool;
		func_3504(var_20_bool, var_21_object, var_22_object, var_23_bool);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		if(var_17_int == 1) {
			func_2766(var_1_object);
		} else {
			int var_25_int;
			func_1024(var_16_float, var_25_int, var_25_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		bool var_18_bool = false;
		if(var_1_object == var_17_int) {
			if(!var_2_object) //@nz
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_2_object = true;
			object var_21_object;
			var_17_int = var_21_object;
			func_2521(var_21_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		bool var_18_bool = false;
		if(var_1_object == var_17_int) {
			if(var_2_object != 0)
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		@RequestClearPath(var_17_int);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		func_880(var_17_int);
		object var_22_object;
		var_17_int = var_22_object;
		func_3498();
	}

}


task task_5
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
	{
		object var_18_object;
		var_17_object = var_18_object;
		func_3401(var_18_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_17_object = var_21_object;
		object var_22_object;
		var_18_object = var_22_object;
		bool var_23_bool;
		var_19_bool = var_23_bool;
		bool var_20_bool;
		func_3504(var_20_bool, var_21_object, var_22_object, var_23_bool);
	}

}


task task_6
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
	{
		bool var_19_bool;
		@IsOverrideActive(var_19_bool);
		if(!var_19_bool) { //@nz
			object var_21_object;
			var_17_object = var_21_object;
			func_2850(var_21_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, string var_18_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
	{
	}

}


task task_7
{
	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
	{
		func_1962();
		object var_18_object;
		var_17_object = var_18_object;
		func_3498();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
	{
		object var_19_object;
		var_17_object = var_19_object;
		bool var_18_bool;
		func_3377(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			func_1962();
			object var_141_object;
			var_17_object = var_141_object;
			func_3384(var_141_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
	{
		object var_19_object;
		var_17_object = var_19_object;
		bool var_18_bool;
		func_3364(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			bool var_141_bool; object var_142_object;
			var_17_object = var_142_object;
			func_2072(var_141_bool, var_142_object);
			if(var_141_bool != 0)
				return 0;
			func_1962();
			object var_143_object;
			var_17_object = var_143_object;
			func_3371(var_143_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, object var_18_object, bool var_19_bool, object var_106_object)
		{
		object var_108_object;
		var_106_object = var_108_object;
			bool var_107_bool;
		func_2203(var_107_bool, var_108_object);
		if(!var_107_bool) { //@nz
			object var_136_object;
			var_106_object = var_136_object;
			func_3401(var_136_object);
		}
		func_1962();
		object var_151_object;
		var_106_object = var_151_object;
		func_3425(var_151_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_17_object = var_21_object;
		object var_22_object;
		var_18_object = var_22_object;
		bool var_23_bool;
		var_19_bool = var_23_bool;
		bool var_20_bool;
		func_3504(var_20_bool, var_21_object, var_22_object, var_23_bool);
		if(var_20_bool != 0) {
			object var_106_object;
			var_17_object = var_106_object;
			func_2010();
		}
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
{
	object var_21_object;
	var_17_object = var_21_object;
	int var_22_int;
	var_18_int = var_22_int;
	float var_23_float;
	var_19_float = var_23_float;
	func_2271(var_21_object, var_22_int, var_23_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, int var_18_int, float var_19_float, float var_20_float, cvector var_21_cvector, cvector var_22_cvector)
{
	object var_23_object;
	var_17_object = var_23_object;
	int var_24_int;
	var_18_int = var_24_int;
	float var_25_float;
	var_19_float = var_25_float;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	cvector var_27_cvector;
	var_22_cvector = var_27_cvector;
	func_2339(var_25_float, var_26_cvector, var_27_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, string var_18_string)
{
	float var_20_float;
	if(var_18_string == "health") {
		@GetProperty("health", var_20_float);
		if(var_20_float <= 0)
			@SignalDeath(var_17_object);
	}
}


// @pe
void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, string var_18_string)
{
	if(var_18_string == "prc")
		@ResetAAS();
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_3440(var_18_object);
}


// @pe
void func_1024(bool var_0_bool, object var_1_object, int var_25_int)
{
	if(var_25_int != 0)
		return 0;
	bool var_28_bool;
	func_1062(var_28_bool, var_1_object);
	if(!var_28_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_344_bool;
		func_3538(var_344_bool);
		if(var_344_bool == 0) goto Label_15;
		func_2508("Neutral");
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


void func_1541(bool var_584_bool, float var_585_float)
{
	float var_588_float; bool var_589_bool;
	@rand(var_588_float);
	if(var_588_float < var_585_float) {

		for(;;) {
			@IsAnimationPlaying(var_589_bool);
			if(!var_589_bool) { //@nz
			} else {
				bool var_592_bool;
				func_1639(var_592_bool);
				if(var_592_bool != 0) {
					var_584_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_584_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1743(var_589_bool);
}


void func_2565(string var_194_string)
{
	bool var_203_bool; int var_204_int; bool var_205_bool; int var_206_int; bool var_207_bool; float var_208_float; cvector var_209_cvector; cvector var_210_cvector;
	@IsExisting3DSound(var_203_bool, var_194_string);
	if(!var_203_bool) { //@nz
		var_204_int = 0;

		for(;;) {
			@IsExisting3DSound(var_205_bool, (var_194_string + (var_204_int + 1)));
			if(!var_205_bool) { //@nz
				break;
			Label_2585:
				@irand(var_206_int, var_204_int);
				var_194_string += (var_206_int + 1);
	}
			@Is3DSoundLoaded(var_207_bool, var_194_string);
			if(var_207_bool != 0) {
				@GetEyesHeight(var_208_float);
				@GetDirection(var_209_cvector);
				var_210_cvector = var_209_cvector * 50;
				var_221_float = GetByIndex(var_210_cvector, 1);
				SetByIndex(var_210_cvector, 1) = (var_221_float + var_208_float);
				@PlayGlobalSound(var_194_string, var_210_cvector);
			}
		}
		var_204_int += 1;
	}
	var_216_bool = !var_204_int; //@nz
	if(var_216_bool == 0) goto Label_2585;
}


void func_2057(cvector var_51_cvector, object var_52_object)
{
	cvector var_55_cvector;
	@GetPosition(var_55_cvector);
	cvector var_56_cvector;
	var_52_object->GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
}


void func_2064(float var_96_float, object var_97_object)
{
	cvector var_101_cvector;
	@GetPosition(var_101_cvector);
	cvector var_102_cvector;
	var_97_object->GetPosition(var_102_cvector);
	var_96_float = (var_102_cvector - var_101_cvector) | (var_102_cvector - var_101_cvector);
}


void func_1046(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2072(bool var_19_bool, object var_20_object)
{
	bool var_22_bool;
	@IsPlayerActor(var_20_object, var_22_bool);
	var_22_bool = var_19_bool;
}


void func_2077(bool var_31_bool, object var_32_object, string var_33_string)
{
	var_38_bool = IsFuncExist(var_32_object, "HasProperty", 2);
	if(!var_38_bool) { //@nz
		var_31_bool = false;
		return 2;
	}
	bool var_35_bool;
	var_32_object->HasProperty(var_33_string, var_35_bool);
	var_35_bool = var_31_bool;
}


void func_1568(bool var_0_bool, bool var_385_bool, float var_386_float)
{
	bool var_392_bool; cvector var_393_cvector; cvector var_394_cvector; cvector var_395_cvector; float var_396_float;
	
	for(;;) {
		@IsAnimationPlaying(var_392_bool);
		if(!var_392_bool) //@nz
			break;
		bool var_398_bool;
		func_1639(var_398_bool);
		if(var_398_bool != 0) {
			var_385_bool = true;
			return 10;
		}
		bool var_441_bool;
		func_2203(var_441_bool, var_0_bool);
		if(!var_441_bool) { //@nz
			var_385_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_393_cvector); //@t
		@GetPFPosition(var_394_cvector);
		var_395_cvector = var_393_cvector - var_394_cvector;
		var_396_float = var_395_cvector | var_395_cvector;
		if(var_396_float < (var_386_float * var_386_float)) {
			bool var_446_bool; float var_447_float;
			var_386_float = var_447_float;
			func_1404(var_395_cvector, var_396_float, var_446_bool, var_447_float);
			var_385_bool = true;
			return 10;
		}
		@sync();
	}
	func_1743(var_396_float);
	var_385_bool = false;
}


// @pe
void func_1062(bool var_279_bool, object var_280_object)
{
	object var_282_object;
	var_280_object = var_282_object;
	bool var_281_bool;
	func_2203(var_281_bool, var_282_object);
	var_281_bool = var_279_bool;
}


void func_40(bool var_0_bool, int var_141_int, object var_142_object)
{
	var_0_bool = var_142_object;
	bool var_152_bool; object var_153_object;
	var_142_object = var_153_object;
	func_2364(var_152_bool, var_153_object, 70.0);
	if(!var_152_bool) { //@nz
		var_141_int = -2;
		return 8;
	}
	object var_148_object;
	@CreateDialog(var_148_object);
	int var_199_int;
	func_3532(var_199_int);
	var_148_object->SetNPCName(var_199_int);
	int var_200_int;
	func_3530(var_200_int);
	var_148_object->SetNPCDescription(var_200_int);
	string var_201_string;
	func_3534(var_201_string);
	var_148_object->SetPhoto(var_201_string);
	string var_202_string;
	func_3536(var_202_string);
	var_148_object->SetPhoto2(var_202_string);
	int var_203_int;
	func_2827(var_203_int);
	var_148_object->SetPlayerName(var_203_int);
	bool var_149_bool;
	@IsOverrideActive(var_149_bool);
	if(var_149_bool != 0) {
		var_141_int = -2;
		return 8;
	}
	@DoDialog(var_148_object);
	object var_212_object; object var_213_object;
	var_142_object = var_212_object;
	var_148_object = var_213_object;
	TaskCall(2);
	func_114(var_214_object, var_215_object, var_216_string, var_217_bool, var_212_object, var_213_object);
	TaskReturn();
	bool var_151_bool;
	var_148_object->IsDialogEnd(var_151_bool);
	
	for(;;) {
		var_300_bool = !var_151_bool; //@nz
		if(var_300_bool == 0) goto Label_103;
		@sync();
		var_148_object->IsDialogEnd(var_151_bool);
	}
	
Label_103:
	object var_301_object;
	var_142_object = var_301_object;
	func_2432();
	@StopDialog(var_148_object);
	var_148_object->GetReturnValue(-1);
	int var_150_int = var_141_int;
}
EMIT "Stack[-4] = 0";


void func_2089(float var_497_float, object var_498_object, float var_499_float, int var_500_int)
{
	int var_510_int; int var_512_int;
	object var_517_object;
	var_498_object = var_517_object;
	bool var_516_bool;
	func_2077(var_516_bool, var_517_object, "health");
	if(!var_516_bool) //@nz
		var_497_float = 0.0;
	bool var_520_bool; object var_521_object;
	func_2077(var_520_bool, var_521_object, "armor");
	if(!var_520_bool) //@nz
		var_510_int = 0;
	else
		var_521_object->GetProperty("armor", var_510_int);
	string var_525_string; int var_526_int;
	var_500_int = var_526_int;
	func_2043(var_525_string, var_526_int);
	string var_511_string = "armor_" + var_525_string;
	bool var_531_bool; object var_532_object; string var_533_string;
	var_498_object = var_532_object;
	func_2077(var_531_bool, var_532_object, var_533_string);
	if(!var_531_bool) //@nz
		var_512_int = 0;
	else
		var_498_object->GetProperty(var_533_string, var_512_int);

	float var_535_float;
	func_2713(var_535_float, ((var_510_int + var_512_int) / 100.0), (float)1);
	float var_513_float;
	var_535_float = var_513_float;
	float var_514_float;
	var_498_object->GetProperty("health", var_514_float);
	float var_515_float = var_499_float * (1 - var_513_float);
	float var_545_float;
	func_2720(var_545_float, (var_514_float - var_515_float), (float)0, (float)1);
	var_498_object->SetProperty("health", var_545_float);
	bool var_551_bool; object var_552_object;
	var_498_object = var_552_object;
	func_2072(var_551_bool, var_552_object);
	if(var_551_bool != 0) {
		float var_553_float = -var_515_float;
		func_2747(var_553_float);
	}
	var_515_float = var_497_float;
	
}


void func_1069(string var_297_string)
{
	var_297_string = "walk";
}


// @pe
void func_2606(bool var_86_bool, string var_87_string)
{
	var_86_bool = true;
	bool var_88_bool = true;
	bool var_89_bool = true;
	bool var_90_bool = true;
	bool var_91_bool = true;
	bool var_92_bool = true;
	bool var_93_bool = true;
	bool var_94_bool = true;
	bool var_95_bool = true;
	bool var_96_bool = true;
	bool var_97_bool = true;
	bool var_98_bool = true;
	var_100_bool = var_87_string == "woman";
	if(var_100_bool != 1) {
		var_102_bool = var_87_string == "worker";
		if(var_102_bool != 1)
			var_98_bool = false;
	}
	if(var_98_bool != 1) {
		var_104_bool = var_87_string == "butcher";
		if(var_104_bool != 1)
			var_97_bool = false;
	}
	if(var_97_bool != 1) {
		var_106_bool = var_87_string == "wasted_girl";
		if(var_106_bool != 1)
			var_96_bool = false;
	}
	if(var_96_bool != 1) {
		var_108_bool = var_87_string == "boy";
		if(var_108_bool != 1)
			var_95_bool = false;
	}
	if(var_95_bool != 1) {
		var_110_bool = var_87_string == "vaxxabitka";
		if(var_110_bool != 1)
			var_94_bool = false;
	}
	if(var_94_bool != 1) {
		var_112_bool = var_87_string == "unosha";
		if(var_112_bool != 1)
			var_93_bool = false;
	}
	if(var_93_bool != 1) {
		var_114_bool = var_87_string == "wasted_male";
		if(var_114_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 1) {
		var_116_bool = var_87_string == "alkash";
		if(var_116_bool != 1)
			var_91_bool = false;
	}
	if(var_91_bool != 1) {
		var_118_bool = var_87_string == "dohodyaga";
		if(var_118_bool != 1)
			var_90_bool = false;
	}
	if(var_90_bool != 1) {
		var_120_bool = var_87_string == "vaxxabit";
		if(var_120_bool != 1)
			var_89_bool = false;
	}
	if(var_89_bool != 1) {
		var_122_bool = var_87_string == "nudegirl";
		if(var_122_bool != 1)
			var_88_bool = false;
	}
	if(var_88_bool != 1) {
		var_124_bool = var_87_string == "morlok";
		if(var_124_bool != 1)
			var_86_bool = false;
	}
}


void func_1071(string var_298_string)
{
	var_298_string = "run";
}


// @pe
void func_1073(object var_153_object, bool var_154_bool)
{
	object var_161_object; bool var_162_bool;
	func_1101(var_158_bool, var_159_float, var_160_int, var_161_object, var_162_bool, var_161_object, var_162_bool, 180.0);
}


// @pe
void func_1081(float var_494_float)
{
	var_494_float = 0.1;
}


// @pe
void func_1084(int var_501_int)
{
	var_501_int = 0;
}


void func_3133(void)
{
	@ClearSubContainer(0);
	int var_28_int;
	func_2757(var_28_int);
	int var_26_int;
	var_28_int = var_26_int;
	func_2550("fresh_meat", 1, 4, 3);
	func_2550("dried_meat", 1, 4, 3);
	func_2550("smoked_meat", 1, 4, 3);
	func_2550("vegetables", 1, 3, 3);
	if(var_26_int >= 3) {
		func_2539("revolver_ammo", 1, 5);
		func_2539("rifle_ammo", 1, 5);
		func_2539("samopal_ammo", 1, 5);
		func_2539("powder", 1, 500);
	}
}


void func_1611(bool var_0_bool, bool var_400_bool)
{
	cvector var_406_cvector; cvector var_407_cvector;
	bool var_411_bool;
	func_2203(var_411_bool, var_0_bool);
	if(!var_411_bool) { //@nz
		var_400_bool = false;
		return 10;
	}
	bool var_414_bool;
	float var_410_float;
	func_1700(var_410_float, var_414_bool);
	if(var_414_bool != 0) {
		var_0_bool->GetPFPosition(var_406_cvector); //@t
		@GetPFPosition(var_407_cvector);
		var_0_bool->GetAttackDistance(var_410_float); //@t
		var_400_bool = ((var_406_cvector - var_407_cvector) | (var_406_cvector - var_407_cvector)) <= ((var_410_float + 50) * (var_410_float + 50));
		return 10;
	}
	var_400_bool = false;
}


void func_1101(bool var_0_bool, object var_3_object, bool var_5_bool, object var_161_object, bool var_162_bool, float var_163_float, bool var_236_bool, bool var_326_bool)
{
	float var_175_float; cvector var_176_cvector; cvector var_177_cvector; bool var_179_bool; float var_182_float; cvector var_183_cvector; bool var_184_bool; float var_185_float;
	func_1330(var_183_cvector, var_184_bool, var_185_float);
	var_5_bool = 0;
	var_210_bool = IsFuncExist(var_161_object, "@GetAttackDistance", 1);
	if(var_210_bool != 0) {
		var_161_object->GetAttackDistance(var_175_float);
		var_175_float += 50;
	} else {
						var_163_float = var_175_float;
	}
	if(var_175_float >= 150)
		var_175_float = 150;
	var_3_object = false;
	var_0_bool = var_161_object;
	bool var_178_bool;
	@IsPlayerActor(var_0_bool, var_178_bool);
	if(var_178_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_216_object;
		func_2693(var_216_object);
		@SendPlayerEnemy(var_161_object, var_216_object);
	}
	if(var_162_bool != 0)
		var_179_bool = false;
	else
		var_179_bool = true;

	
Label_1141:
	for(;;) {
		bool var_219_bool = false;
		bool var_220_bool;
		func_2203(var_220_bool, var_0_bool);
		if(var_220_bool != 0) {
			if(!var_3_object) //@nz
				var_219_bool = true;
		}
		if(var_219_bool != 0) {
			func_1743(var_185_float);
			var_0_bool->GetPFPosition(var_176_cvector); //@t
			@GetPFPosition(var_177_cvector);
			var_182_float = (var_176_cvector - var_177_cvector) | (var_176_cvector - var_177_cvector);
			if(var_182_float >= ((300.0 + var_175_float) * (300.0 + var_175_float))) {
				bool var_230_bool; float var_232_float;
				var_175_float = var_232_float;
				TaskCall(4);
				func_817(var_238_bool, var_230_bool, var_0_bool, var_232_float, 3000.0, true, false);
				TaskReturn();
				if(!var_236_bool) { //@nz
				} else {
					var_179_bool = false;
			} else {
			if(var_182_float >= (var_163_float * var_163_float)) {
				var_0_bool->GetPFPosition(var_183_cvector); //@t
				@CanReachByPF(var_184_bool, var_183_cvector);
				if(!var_184_bool) { //@nz
					bool var_320_bool; float var_322_float;
					var_175_float = var_322_float;
					TaskCall(4);
					func_817(var_328_bool, var_320_bool, var_0_bool, var_322_float, 3000.0, true, false);
					TaskReturn();
					if(!var_326_bool) { //@nz
						goto Label_1313;
					}
					var_179_bool = false;
					goto Label_1141;
				}
				if(!var_179_bool) { //@nz
					func_2353(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1743(var_185_float);
					@StopAsync();
					var_179_bool = true;
					bool var_342_bool;
					func_2203(var_342_bool, var_0_bool);
					if(!var_342_bool) { //@nz
						goto Label_1313;
					}
				}
				@rand(var_185_float);
				bool var_345_bool;
				var_347_bool = var_185_float < 0.6;
				if(var_347_bool != 1) {
					bool var_348_bool;
					func_1700(true, var_348_bool);
					if(var_348_bool != 1)
						var_345_bool = false;
				}
				if(var_345_bool != 0) {
					@Face(var_0_bool);
					func_1750();
					@PlayAnimation("all", "attack_stay");
					bool var_385_bool; float var_386_float;
					func_1568(var_185_float, var_385_bool, var_386_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1743(var_185_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_603_bool;
					func_1700(var_185_float, var_603_bool);
					var_604_bool = !var_603_bool; //@nz
					if(var_604_bool == 0) goto Label_1303;
					bool var_605_bool;
					func_2203(var_605_bool, var_0_bool);
					if(!var_605_bool) { //@nz
						goto Label_1313;
					}
					var_0_bool->GetPFPosition(var_176_cvector); //@t
					@GetPFPosition(var_177_cvector);
					if(!(((var_176_cvector - var_177_cvector) | (var_176_cvector - var_177_cvector)) < (var_386_float * var_386_float))) goto Label_1303;
					bool var_610_bool; float var_611_float;
					var_163_float = var_611_float;
					func_1404(var_184_bool, var_185_float, var_610_bool, var_611_float);
					var_612_bool = !var_610_bool; //@nz
					if(var_612_bool == 0) goto Label_1303;
					goto Label_1313;
			}
				bool var_613_bool; float var_614_float;
				var_163_float = var_614_float;
				func_1404(var_184_bool, var_185_float, var_613_bool, var_614_float);
				if(!var_613_bool) { //@nz
					goto Label_1313;
				}
				var_179_bool = true;

			}
		Label_1303:
			goto Label_1312;
			}
			Label_1312:
			}
		}
	Label_1313:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_178_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_595(void)
{
	@KillTimer(1);
	func_798();
}


void func_1639(bool var_398_bool)
{
	bool var_399_bool = false;
	bool var_400_bool;
	func_1611(var_399_bool, var_400_bool);
	if(var_400_bool != 0) {
		bool var_417_bool;
		func_1655(var_398_bool, var_399_bool, var_417_bool);
		if(var_417_bool != 0)
			var_399_bool = true;
	}
	if(var_399_bool != 0) {
		var_398_bool = true;
		return 0;
	}
	var_398_bool = false;
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_212_object, object var_213_object)
{
	var_0_bool = var_213_object;
	var_1_object = var_212_object;
	var_3_object = false;
	if(1 != 0) {
		func_243(var_213_object, "Neutral");
		var_0_bool->SetMessage(537935); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_232_bool;
		func_2803(var_1_object);
		if(!var_232_bool) //@nz
			var_0_bool->AddReply(537936, -1, 39797); //@t
		bool var_244_bool;
		func_2803(var_1_object);
		if(var_244_bool != 0)
			var_0_bool->AddReply(537937, -1, 39798); //@t
		bool var_249_bool;
		func_2791(var_1_object);
		if(var_249_bool != 0)
			var_0_bool->AddReply(537938, 39800, 39799); //@t
		bool var_258_bool;
		func_2803(var_1_object);
		if(var_258_bool != 0)
			var_0_bool->AddReply(537951, 39813, 39812); //@t
		bool var_263_bool;
		func_2815(var_1_object);
		if(var_263_bool != 0)
			var_0_bool->AddReply(537964, -1, 39826); //@t
		bool var_272_bool;
		func_2791(var_1_object);
		if(var_272_bool != 0)
			var_0_bool->AddReply(537965, -1, 39827); //@t
		bool var_277_bool;
		func_2815(var_1_object);
		if(var_277_bool != 0)
			var_0_bool->AddReply(537966, -1, 39828); //@t
		bool var_282_bool;
		func_2803(var_1_object);
		if(var_282_bool != 0)
			var_0_bool->AddReply(537967, -1, 39829); //@t
		goto Label_213;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_213:
	bool var_287_bool;
	func_3538(var_287_bool);
	if(var_287_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2508(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_242;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_242:
		return 0;

	}
	
}


void func_2162(bool var_122_bool, object var_123_object)
{
	bool var_125_bool;
	var_123_object->IsDead(var_125_bool);
	var_125_bool = var_122_bool;
}


void func_1655(bool var_0_bool, string var_4_string, bool var_417_bool)
{
	object var_423_object; float var_425_float; cvector var_426_cvector; cvector var_427_cvector;
	@GetScene(var_423_object);
	bool var_424_bool = false;
	
	for(;;) {
		cvector var_428_cvector;
		func_2057(var_428_cvector, var_0_bool);
		var_434_int = -var_428_cvector;
		@FindDirLength(var_425_float, var_434_int, var_4_string);
		if(var_425_float < var_4_string) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_426_cvector); //@t
				@GetPFPosition(var_427_cvector);
				@WaitForAnimEnd();
				func_1743(var_427_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_424_bool = true;
				bool var_439_bool;
				func_1611(var_427_cvector, var_439_bool);
				var_440_bool = !var_439_bool; //@nz
				if(var_440_bool == 0) goto Label_1696;
		}
		for(;;) {
			var_424_bool = var_417_bool;

		}

	Label_1696:
	}
}
EMIT "Stack[-5] = 0";


void func_2167(bool var_111_bool, object var_112_object)
{
	if(var_112_object == null) {
		var_111_bool = false;
		return 4;
	}
	bool var_118_bool = false;
	var_121_bool = IsFuncExist(var_112_object, "IsDead", 1);
	if(var_121_bool != 0) {
		bool var_122_bool; object var_123_object;
		var_112_object = var_123_object;
		func_2162(var_122_bool, var_123_object);
		if(var_122_bool != 0)
			var_118_bool = true;
	}
	if(var_118_bool != 0) {
		var_111_bool = false;
		return 4;
	}
	object var_115_object;
	@GetScene(var_115_object);
	if(var_115_object == null) {
		var_111_bool = false;
		return 4;
	}
	object var_116_object;
	var_112_object->GetScene(var_116_object);
	if(var_115_object != var_116_object) {
		var_111_bool = false;
		return 4;
	}
	var_111_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_635(void)
{
	@SetTimer(1, 2.0);
}


void func_3197(int var_66_int, string var_67_string)
{
	int var_69_int;
	@GetInvItemByName(var_69_int, var_67_string);
	var_69_int = var_66_int;
}


void func_640(void)
{
}


void func_3202(bool var_26_bool, object var_27_object, bool var_28_bool)
{
	bool var_31_bool; object var_32_object;
	func_2077(var_31_bool, var_32_object, "class");
	if(!var_31_bool) { //@nz
		var_26_bool = false;
		return 2;
	}
	string var_30_string;
	var_32_object->GetProperty("class", var_30_string);
	bool var_42_bool = true;
	bool var_43_bool = true;
	bool var_44_bool = true;
	bool var_45_bool = true;
	bool var_46_bool = true;
	bool var_47_bool = true;
	bool var_48_bool = true;
	bool var_49_bool = true;
	bool var_50_bool = true;
	bool var_51_bool = true;
	var_53_bool = var_30_string == "patrol";
	if(var_53_bool != 1) {
		var_55_bool = var_30_string == "sanitar";
		if(var_55_bool != 1)
			var_51_bool = false;
	}
	if(var_51_bool != 1) {
		var_57_bool = var_30_string == "soldier";
		if(var_57_bool != 1)
			var_50_bool = false;
	}
	if(var_50_bool != 1) {
		var_59_bool = var_30_string == "woman";
		if(var_59_bool != 1)
			var_49_bool = false;
	}
	if(var_49_bool != 1) {
		var_61_bool = var_30_string == "wasted_girl";
		if(var_61_bool != 1)
			var_48_bool = false;
	}
	if(var_48_bool != 1) {
		var_63_bool = var_30_string == "vaxxabitka";
		if(var_63_bool != 1)
			var_47_bool = false;
	}
	if(var_47_bool != 1) {
		var_65_bool = var_30_string == "vaxxabit";
		if(var_65_bool != 1)
			var_46_bool = false;
	}
	if(var_46_bool != 1) {
		var_67_bool = var_30_string == "little_girl";
		if(var_67_bool != 1)
			var_45_bool = false;
	}
	if(var_45_bool != 1) {
		var_69_bool = var_30_string == "girl";
		if(var_69_bool != 1)
			var_44_bool = false;
	}
	if(var_44_bool != 1) {
		var_71_bool = var_30_string == "dohodyaga";
		if(var_71_bool != 1)
			var_43_bool = false;
	}
	if(var_43_bool != 1) {
		var_73_bool = var_30_string == "nudegirl";
		if(var_73_bool != 1)
			var_42_bool = false;
	}
	if(var_42_bool != 0) {
		var_26_bool = true;
		return 2;
	}
	if(var_28_bool != 0) {
		var_26_bool = false;
		return 2;
	}
	var_26_bool = true;
	bool var_75_bool = true;
	bool var_76_bool = true;
	bool var_77_bool = true;
	bool var_78_bool = true;
	bool var_79_bool = true;
	var_81_bool = var_30_string == "worker";
	if(var_81_bool != 1) {
		var_83_bool = var_30_string == "butcher";
		if(var_83_bool != 1)
			var_79_bool = false;
	}
	if(var_79_bool != 1) {
		var_85_bool = var_30_string == "boy";
		if(var_85_bool != 1)
			var_78_bool = false;
	}
	if(var_78_bool != 1) {
		var_87_bool = var_30_string == "unosha";
		if(var_87_bool != 1)
			var_77_bool = false;
	}
	if(var_77_bool != 1) {
		var_89_bool = var_30_string == "wasted_male";
		if(var_89_bool != 1)
			var_76_bool = false;
	}
	if(var_76_bool != 1) {
		var_91_bool = var_30_string == "alkash";
		if(var_91_bool != 1)
			var_75_bool = false;
	}
	if(var_75_bool != 1) {
		var_93_bool = var_30_string == "morlok";
		if(var_93_bool != 1)
			var_26_bool = false;
	}
}


void func_2693(object var_23_object)
{
	object var_25_object;
	@self(var_25_object);
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_2699(cvector var_49_cvector, cvector var_50_cvector)
{
	float var_58_float = sqrt(var_50_cvector | var_50_cvector);
	if(var_58_float < 0.000001)
		var_49_cvector = [0.0, 0.0, 0.0];
	var_49_cvector = var_50_cvector / var_58_float;
}


void func_2709(float var_96_float, cvector var_97_cvector, cvector var_98_cvector)
{
	var_96_float = (var_98_cvector - var_97_cvector) | (var_98_cvector - var_97_cvector);
}


// @pe
void func_2713(float var_535_float, float var_536_float, float var_537_float)
{
	if(var_536_float < var_537_float)
		var_536_float = var_535_float;
	else
		var_537_float = var_535_float;
	
}


void func_2203(bool var_107_bool, object var_108_object)
{
	object var_112_object;
	var_108_object = var_112_object;
	bool var_111_bool;
	func_2167(var_111_bool, var_112_object);
	if(!var_111_bool) { //@nz
		var_107_bool = false;
		return 2;
	}
	bool var_129_bool; object var_130_object;
	func_2077(var_129_bool, var_130_object, "noaccess");
	if(!var_129_bool) { //@nz
		var_107_bool = true;
		return 2;
	}
	int var_110_int;
	var_130_object->GetProperty("noaccess", var_110_int);
	var_107_bool = var_110_int == 0;
}


// @pe
void func_2720(float var_545_float, float var_546_float, float var_547_float, float var_548_float)
{
	if(var_546_float < var_547_float) {
		var_547_float = var_545_float;
		return 0;
	}
	if(var_546_float > var_548_float) {
		var_548_float = var_545_float;
		return 0;
	}
	var_546_float = var_545_float;
}


void func_1700(bool var_0_bool, bool var_348_bool)
{
	bool var_350_bool;
	var_353_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_353_bool != 0) {
		var_0_bool->IsAttacking(var_350_bool); //@t
		var_350_bool = var_348_bool;
	}
	var_348_bool = false;
}


void func_2731(bool var_42_bool, int var_43_int, int var_44_int)
{
	int var_46_int;
	@irand(var_46_int, var_44_int);
	var_42_bool = var_46_int < var_43_int;
}


void func_1711(object var_2_object, bool var_5_bool)
{
	int var_468_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_467_float;
	@rand(var_467_float);
	float var_474_float;
	func_1761(var_474_float);
	if(var_467_float < var_474_float) {
		@irand(var_468_int, var_2_object);
		@Speak("attack" + (var_468_int + 1));
		int var_479_int;
		func_1759(var_479_int);
		var_5_bool = var_479_int;
	}
}


void func_2736(object var_18_object)
{
	object var_20_object;
	@CreateObjectSet(var_20_object);
	var_20_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_2227(object var_34_object)
{
	string var_48_string;
	if(var_34_object == null)
		return 14;
	bool var_42_bool;
	@IsDead(var_42_bool);
	if(var_42_bool != 0)
		return 14;
	int var_43_int;
	@GetSecondaryAnimationType(var_43_int);
	if(var_43_int < 0)
		return 14;
	cvector var_44_cvector;
	var_34_object->GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_47_cvector = var_45_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_47_cvector, 0);
	var_54_float = GetByIndex(var_46_cvector, 0);
	var_56_float = GetByIndex(var_47_cvector, 2);
	var_57_float = GetByIndex(var_46_cvector, 2);
	if(((var_53_float * var_54_float) + (var_56_float * var_57_float)) >= 0)
		var_48_string = "fhit";
	else
		var_48_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_48_string + "1"), (var_48_string + "2"), -10);
	
}


void func_2742(int var_234_int, string var_235_string)
{
	int var_237_int;
	@GetVariable(var_235_string, var_237_int);
	var_237_int = var_234_int;
}


void func_2747(float var_553_float)
{
	object var_555_object;
	@CreateFloatVector(var_555_object);
	var_555_object->add(var_553_float);
	@SendWorldWndMessage(15, var_555_object);
}
EMIT "Stack[-1] = 0";


void func_2757(int var_28_int)
{
	float var_30_float;
	@GetGameTime(var_30_float);
	var_28_int = 1 + (var_30_float / 24);
}


void func_714(bool var_0_bool, object var_1_object)
{
	int var_86_int; bool var_87_bool; cvector var_88_cvector; object var_89_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_bool);
	
	for(;;) {
		func_635();
		@irand(var_86_int, 10);
		@Sleep((var_86_int + 5), var_87_bool);
		if(var_87_bool != 0) {
			func_640();
		} else {
		for(;;) {
			func_635();
			@GetPFPosition(var_88_cvector);
			float var_96_float; cvector var_98_cvector;
			var_88_cvector = var_98_cvector;
			func_2709(var_96_float, var_1_object, var_98_cvector);
			if(var_96_float > 40000) {
				@FindPathTo(var_89_object, var_1_object);
				if(var_89_object != null) {
					@RotatePath(var_89_object, var_87_bool);
					if(!var_87_bool) { //@nz
					} else {
					@FollowPath(var_89_object, false, var_87_bool);
					if(!var_87_bool) { //@nz
						goto Label_795;
					}
					var_107_float = GetByIndex(var_0_bool, 0);
					var_108_float = GetByIndex(var_0_bool, 2);
					@Rotate(var_107_float, var_108_float, var_87_bool);
					if(!var_87_bool) { //@nz
						goto Label_795;
					}
					@WaitForAnimEnd(var_87_bool);
					if(!var_87_bool) { //@nz
						goto Label_795;
					}
					goto Label_796;
				EMIT "GOTO 0x30c";
				}
				@Sleep(1);
				var_89_object = null;
				goto Label_795;
			}
			var_112_float = GetByIndex(var_0_bool, 0);
			var_113_float = GetByIndex(var_0_bool, 2);
			@Rotate(var_112_float, var_113_float, var_87_bool);
			if(!var_87_bool) { //@nz
				goto Label_795;
			}
			@WaitForAnimEnd(var_87_bool);
			if(!var_87_bool) { //@nz
				goto Label_795;
			}
			goto Label_796;
			}
		Label_795:
		}
		}
	Label_796:
	}
	
}
EMIT "Return(); Pop(8)";


void func_2766(object var_223_object)
{
	bool var_225_bool;
	@IsPlayerActor(var_223_object, var_225_bool);
	if(var_225_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1743(bool var_0_bool)
{
	func_2766(var_0_bool);
}


void func_1748(int var_558_int)
{
	var_558_int = 0;
}


void func_1750(void)
{
	func_2565("attack_stay");
}


void func_2775(void)
{
	object var_459_object;
	@GetScene(var_459_object);
	object var_461_object;
	func_2693(var_461_object);
	@BroadcastMessage("battle", var_461_object, var_459_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1755(void)
{
}


void func_1757(bool var_583_bool)
{
	var_583_bool = true;
}


void func_1759(int var_479_int)
{
	var_479_int = 1;
}


void func_2271(object var_21_object, int var_22_int, float var_23_float)
{
	cvector var_33_cvector; object var_34_object; int var_35_int; bool var_36_bool; cvector var_37_cvector; cvector var_38_cvector;
	bool var_42_bool = false;
	bool var_43_bool = false;
	if(var_21_object != 0) {
		if(var_22_int != 4)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		if(var_22_int != 5)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		cvector var_49_cvector; cvector var_50_cvector;
		cvector var_51_cvector; object var_52_object;
		var_21_object = var_52_object;
		func_2057(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_2699(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		@CreateVectorVector(var_34_object);
		var_35_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_35_int), var_36_bool, var_37_cvector, var_38_cvector);
			if(!var_36_bool) { //@nz
				break;
			Label_2333:
				var_34_object = null;
	}
			object var_111_object;
			var_21_object = var_111_object;
			func_2227(var_111_object);
		}
		if((var_38_cvector | var_33_cvector) >= 0.70710677)
			var_34_object->add(var_37_cvector);
		var_35_int += 1;
	}
	int var_39_int;
	var_34_object->size(var_39_int);
	if(var_39_int == 0) goto Label_2333;
	int var_40_int;
	@irand(var_40_int, var_39_int);
	cvector var_41_cvector;
	var_34_object->get(var_41_cvector, var_40_int);
	object var_66_object; int var_67_int; float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
	var_21_object = var_66_object;
	var_22_int = var_67_int;
	var_23_float = var_68_float;
	var_41_cvector = var_69_cvector;
	var_70_cvector = -var_33_cvector;
	func_2339(var_68_float, var_69_cvector, var_70_cvector);
}


void func_1761(float var_474_float)
{
	var_474_float = 0.5;
}


// @pe
void func_2786(object var_24_object)
{
	var_24_object->SetReturnValue(1000);
}


void func_1763(object var_28_object)
{
	object var_30_object;
	object var_32_object;
	var_28_object = var_32_object;
	bool var_31_bool;
	func_2072(var_31_bool, var_32_object);
	if(var_31_bool != 0) {
		@GetScene(var_30_object);
		object var_33_object;
		func_2693(var_33_object);
		var_30_object->RemoveStationaryActor(var_33_object);
		var_30_object = null;
	}
	object var_34_object;
	var_28_object = var_34_object;
	func_1782(var_34_object);
}


// @pe
void func_2791(bool var_249_bool)
{
	int var_251_int;
	func_2742(var_251_int, "branch");
	if(var_251_int == 0) {
		var_249_bool = true;
		return 0;
	}
	var_249_bool = false;
}


// @pe
void func_243(object var_2_object, string var_219_string)
{
	bool var_220_bool;
	func_3538(var_220_bool);
	if(!var_220_bool) //@nz
		return 0;
	if(var_219_string == var_2_object)
		return 0;
	string var_223_string; bool var_224_bool;
	var_219_string = var_223_string;
	if(var_219_string == "")
		var_224_bool = false;
	else
		var_224_bool = true;
	func_2515(var_223_string, var_224_bool);
	var_2_object = var_219_string;
	
}


// @pe
void func_2803(bool var_232_bool)
{
	int var_234_int;
	func_2742(var_234_int, "branch");
	if(var_234_int == 1)
		var_232_bool = true;
	var_232_bool = false;
}


void func_1782(object var_34_object)
{
	bool var_36_bool;
	@IsPlayerActor(var_34_object, var_36_bool);
	if(var_36_bool != 0)
		func_2935();
	else
		func_3062();
	func_2911();
	object var_170_object;
	var_34_object = var_170_object;
	func_1802(var_170_object);
	
}


// @pe
void func_2815(bool var_263_bool)
{
	int var_265_int;
	func_2742(var_265_int, "branch");
	if(var_265_int == 2)
		var_263_bool = true;
	var_263_bool = false;
}


void func_3338(void)
{
	var_17_object = GlobalVars[0];
	object var_18_object;
	func_2736(var_18_object);
	var_18_object = var_17_object;
	GlobalVars[0] = var_17_object;
}


void func_2827(int var_203_int)
{
	int var_205_int;
	@GetVariable("branch", var_205_int);
	if(var_205_int == 0) {
		var_203_int = 1;
		return 2;
	EMIT "GOTO 0xb1a";
	}
	if(var_205_int == 1) {
		var_203_int = 2;
		return 2;
	}
	var_203_int = 3;
}


// @pe
void func_1802(object var_170_object)
{
	object var_171_object;
	var_170_object = var_171_object;
	func_1827(var_171_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3345(object var_309_object)
{
	object var_311_object;
	var_309_object = var_311_object;
	bool var_310_bool;
	func_2449(var_310_bool, var_311_object);
	if(!var_310_bool) //@nz
		return 0;
	object var_342_object;
	var_309_object = var_342_object;
	TaskCall(0);
	func_0(var_342_object);
	TaskReturn();
	object var_349_object;
	var_309_object = var_349_object;
	func_2504();
}


void func_2844(int var_150_int)
{
	int var_152_int;
	@GetVariable("branch", var_152_int);
	var_152_int = var_150_int;
}


void func_798(void)
{
	@StopGroup0();
	@Stop();
}


// @pe
void func_2850(object var_21_object)
{
	int var_22_int;
	func_2844(var_22_int);
	if(var_22_int == 1)
		@WorkWithCorpse(var_21_object);
	else
		@Barter(var_21_object);
	
}


void func_1827(object var_171_object)
{
	cvector var_182_cvector; cvector var_183_cvector; cvector var_184_cvector; cvector var_185_cvector; string var_186_string; object var_187_object; bool var_188_bool; bool var_189_bool; float var_190_float; cvector var_191_cvector;
	if(var_171_object == null) {
		func_1918("fdie");
	} else {
		var_171_object->GetPosition(var_182_cvector);
		@GetPosition(var_183_cvector);
		@GetDirection(var_184_cvector);
		var_185_cvector = var_183_cvector - var_182_cvector;
		var_225_float = GetByIndex(var_185_cvector, 0);
		var_226_float = GetByIndex(var_184_cvector, 0);
		var_228_float = GetByIndex(var_185_cvector, 2);
		var_229_float = GetByIndex(var_184_cvector, 2);
		if(((var_225_float * var_226_float) + (var_228_float * var_229_float)) >= 0)
			var_186_string = "fdie";
		else
			var_186_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_171_object = var_187_object;
		var_236_bool = IsFuncExist(var_171_object, "GetScriptProperty", 2);
		if(var_236_bool != 0) {
			var_171_object->HasScriptProperty(var_188_bool, "Owner");
			if(var_188_bool != 0) {
				var_171_object->GetScriptProperty(var_187_object, "Owner");
				if(var_187_object == null)
					var_171_object = var_187_object;
			}
		}
		var_243_bool = IsFuncExist(var_187_object, "@GetEyesHeight", 1);
		if(var_243_bool != 0) {
			var_187_object->GetEyesHeight(var_190_float);
			var_191_cvector = [0.0, 0.0, 0.0];
			var_244_float = GetByIndex(var_191_cvector, 1);
			var_190_float = var_244_float;
			SetByIndex(var_191_cvector, 1) = var_244_float;
			@LookAsync(var_171_object, "head", var_191_cvector);
			var_189_bool = true;
		} else {
			var_189_bool = false;

		}
		string var_246_string;
		var_186_string = var_246_string;
		func_2565(var_246_string);
		@PlayAnimation("all", var_186_string);
		@WaitForAnimEnd();
		if(var_189_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_186_string);
		@RemoveEnvelope();
		var_187_object = null;
	}
	
}


// @pe
void func_3364(bool var_18_bool, object var_19_object)
{
	object var_21_object;
	var_19_object = var_21_object;
	bool var_20_bool;
	func_3540(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
}


void func_2339(object var_23_object, cvector var_26_cvector, cvector var_27_cvector)
{
	object var_30_object;
	@GetScene(var_30_object);
	object var_31_object;
	@AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	object var_34_object;
	var_23_object = var_34_object;
	func_2227(var_34_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3371(object var_143_object)
{
	object var_144_object;
	var_143_object = var_144_object;
	func_3390(var_144_object);
}


void func_2863(int var_51_int, int var_52_int)
{
	if(var_51_int > var_52_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_58_int = 0;
	if(var_51_int != var_52_int) {
		@irand(var_58_int, (var_52_int - var_51_int));
	} else if(var_51_int == 0) {
		return 4;
	}
	var_58_int += var_51_int;
	if(var_58_int == 0)
		return 4;
	int var_66_int;
	func_3197(var_66_int, "Money");
	bool var_59_bool;
	@AddItem(var_59_bool, var_66_int, 0, var_58_int);
	
}


// @pe
void func_3377(bool var_18_bool, object var_19_object)
{
	object var_21_object;
	var_19_object = var_21_object;
	bool var_20_bool;
	func_3540(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
}


void func_1330(object var_1_object, object var_2_object, string var_4_string)
{
	bool var_189_bool; bool var_190_bool; cvector var_191_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_189_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_189_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_190_bool, ("attack" + (var_2_object + 1)));
			if(!var_190_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_191_cvector, "all", "bjump");
		var_205_float = GetByIndex(var_191_cvector, 2);
		var_4_string = -var_205_float;

	}
}


void func_817(object var_2_object, bool var_230_bool, object var_231_object, float var_232_float, float var_233_float, bool var_234_bool, bool var_235_bool)
{
	object var_243_object;
	func_2766(var_243_object);
	@SetTimer(1, 5);
	bool var_241_bool;
	@CanSee(var_241_bool, var_243_object);
	if(var_241_bool != 0) {
		var_2_object = true;
		object var_247_object;
		var_231_object = var_247_object;
		func_2521(var_247_object);
	} else {
		var_2_object = false;
	}
	bool var_254_bool; object var_255_object;
	func_2072(var_254_bool, var_255_object);
	if(var_254_bool != 0) {
		object var_256_object;
		func_2693(var_256_object);
		@SendPlayerEnemy(var_255_object, var_256_object);
	}
	bool var_257_bool; object var_258_object; float var_259_float; float var_260_float; bool var_261_bool; bool var_262_bool;
	var_231_object = var_258_object;
	var_232_float = var_259_float;
	var_233_float = var_260_float;
	var_234_bool = var_261_bool;
	var_235_bool = var_262_bool;
	bool var_242_bool;
	func_922(var_241_bool, var_242_bool, var_257_bool, var_258_object, var_259_float, var_260_float, var_261_bool, var_262_bool);
	var_257_bool = var_242_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_242_bool = var_230_bool;
	
}


void func_2353(object var_331_object)
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


// @pe
void func_3384(object var_141_object)
{
	object var_142_object;
	var_141_object = var_142_object;
	func_3390(var_142_object);
}


void func_2364(bool var_152_bool, object var_153_object, float var_154_float)
{
	cvector var_165_cvector; bool var_172_bool;
	var_153_object->GetPosition(var_165_cvector);
	float var_164_float;
	var_153_object->GetEyesHeight(var_164_float);
	var_173_float = GetByIndex(var_165_cvector, 1);
	SetByIndex(var_165_cvector, 1) = (var_173_float + var_164_float);
	cvector var_166_cvector;
	@GetPosition(var_166_cvector);
	@GetEyesHeight(var_164_float);
	var_174_float = GetByIndex(var_166_cvector, 1);
	SetByIndex(var_166_cvector, 1) = (var_174_float + var_164_float);
	cvector var_167_cvector = var_165_cvector - var_166_cvector;
	var_175_float = GetByIndex(var_167_cvector, 1);
	SetByIndex(var_167_cvector, 1) = (float)0;
	var_177_float = sqrt(var_167_cvector | var_167_cvector);
	var_167_cvector /= var_177_float;
	cvector var_168_cvector = -var_167_cvector;
	cvector var_179_cvector;
	func_2699(var_179_cvector, (var_168_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_169_cvector = ((var_167_cvector * var_154_float) + (var_179_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_171_bool;
	@IsOverrideActive(var_171_bool);
	if(var_171_bool != 0)
		var_152_bool = false;
	@StopWorld();
	@CameraTransit((var_166_cvector + var_169_cvector), var_168_cvector);
	var_192_float = GetByIndex(var_169_cvector, 0);
	var_193_float = GetByIndex(var_169_cvector, 2);
	@Rotate(var_192_float, var_193_float);
	bool var_194_bool;
	func_3538(var_194_bool);
	if(var_194_bool != 0) {
	} else {
		@HasAnimationTrack(var_172_bool, "head");
		if(var_172_bool == 0) goto Label_2426;
		@LookAsyncCamera("head");
	}
Label_2426:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_152_bool = true;
	
}


// @pe
void func_3390(object var_144_object)
{
	object var_145_object;
	var_144_object = var_145_object;
	TaskCall(5);
	func_1073(var_145_object, true);
	TaskReturn();
	@ResetAAS();
}


void func_3401(object var_136_object)
{
	if(var_136_object == null) {
	}
	var_140_object = GlobalVars[0];
	bool var_138_bool;
	var_140_object->in(var_138_bool, var_136_object);
	if(!var_138_bool) { //@nz
		var_142_object = GlobalVars[0];
		var_142_object->add(var_136_object);
	}
	bool var_143_bool; object var_144_object;
	func_2072(var_143_bool, var_144_object);
	if(var_143_bool != 0) {
		object var_147_object;
		func_2693(var_147_object);
		@ReportReputationChange(var_144_object, var_147_object, -0.07);
	}
}


void func_2894(string var_156_string)
{
	object var_160_object;
	@CreateInvItem(var_160_object);
	var_160_object->SetItemName(var_156_string);
	var_160_object->SetProperty("Organ", 1);
	int var_161_int;
	var_160_object->GetItemID(var_161_int);
	bool var_162_bool;
	@AddItem(var_162_bool, var_160_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1365(bool var_0_bool, float var_483_float, int var_484_int)
{
	object var_488_object; float var_489_float; float var_490_float;
	@GetVictim((var_483_float * 0.9), var_488_object);
	@ReportAttack(var_0_bool);
	if(var_488_object == var_0_bool) {
		float var_494_float; object var_495_object; int var_496_int;
		var_488_object = var_495_object;
		var_484_int = var_496_int;
		func_1081(var_496_int);
		var_494_float = var_489_float;
		float var_497_float; object var_498_object; float var_499_float; int var_500_int;
		var_488_object = var_498_object;
		int var_501_int; object var_502_object; int var_503_int;
		var_488_object = var_502_object;
		var_484_int = var_503_int;
		func_1084(var_503_int);
		var_501_int = var_500_int;
		func_2089(var_497_float, var_498_object, var_499_float, var_500_int);
		var_497_float = var_490_float;
		int var_558_int;
		func_1748(var_558_int);
		@ReportHit(var_0_bool, var_558_int, var_490_float, var_499_float);
		object var_559_object; float var_560_float;
		var_488_object = var_559_object;
		var_490_float = var_560_float;
		func_1755();
	}
}
EMIT "Stack[-3] = 0";


void func_2911(void)
{
	int var_150_int;
	func_2844(var_150_int);
	if(var_150_int != 1) {
	}
	func_2894("liver");
	func_2894("kidney");
	func_2894("heart");
	func_2894("blood");
}


// @pe
void func_3425(object var_151_object)
{
	object var_152_object;
	var_151_object = var_152_object;
	func_3401(var_152_object);
	object var_153_object;
	var_151_object = var_153_object;
	TaskCall(5);
	func_1073(var_153_object, true);
	TaskReturn();
	@ResetAAS();
}


void func_880(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1046(var_17_int);
}


// @pe
void func_3440(object var_18_object)
{
	bool var_19_bool; object var_20_object;
	func_2072(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		object var_23_object;
		func_2693(var_23_object);
		@ReportReputationChange(var_20_object, var_23_object, -0.13, true);
	}
	object var_28_object;
	var_18_object = var_28_object;
	TaskCall(6);
	func_1763(var_28_object);
	TaskReturn();
}


void func_2935(void)
{
	@ClearSubContainer(0);
	int var_45_int;
	func_2757(var_45_int);
	int var_43_int;
	var_45_int = var_43_int;
	func_2863(0, (100 + (var_43_int * 100)));
	func_2539("tourniquet", 1, 7);
	func_2539("bandage", 1, 7);
	func_2539("packet", 1, 10);
	func_2539("bottle_water", 1, 3);
	func_2550("rusk", 1, 3, 4);
	func_2539("hook", 1, 20);
	func_2539("watch", 1, 20);
	bool var_113_bool = false;
	if(var_43_int >= 3) {
		if(var_43_int < 6)
			var_113_bool = true;
	}
	if(var_113_bool != 0)
		func_2550("alpha_pills", 1, 2, 3);
	if(var_43_int >= 4)
		func_2550("beta_pills", 1, 4, 3);
	if(var_43_int >= 6) {
		func_2550("alpha_pills", 1, 2, 8);
		func_2550("gamma_pills", 1, 8, 3);
	}
	if(var_43_int >= 8) {
		func_2539("revolver_ammo", 1, 3);
		func_2539("rifle_ammo", 1, 3);
	}
	int var_146_int;
	func_3197(var_146_int, "patrol_mark");
	bool var_42_bool;
	@AddItem(var_42_bool, var_146_int, 0, 1);
}


void func_1404(bool var_0_bool, object var_1_object, bool var_446_bool, float var_447_float)
{
	string var_455_string;
	func_1743(var_455_string);
	int var_452_int;
	@irand(var_452_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2775();
	@PlayAnimation("all", ("attack_begin" + (var_452_int + 1)));
	@WaitForAnimEnd();
	int var_454_int;
	func_1711(var_454_int, var_455_string);
	bool var_480_bool;
	func_2203(var_480_bool, var_0_bool);
	if(!var_480_bool) { //@nz
		@StopAsync();
		var_446_bool = false;
		return 8;
	}
	float var_483_float; int var_484_int;
	var_447_float = var_483_float;
	var_452_int = var_484_int;
	func_1365(var_455_string, var_483_float, var_484_int);
	bool var_453_bool;
	@HasAnimation(var_453_bool, "all", ("attack_middle" + var_452_int));
	if(var_453_bool != 0) {
		func_2775();
		@PlayAnimation("all", ("attack_middle" + var_452_int));
		@WaitForAnimEnd();
		func_1743(var_455_string);
		bool var_568_bool;
		func_2203(var_568_bool, var_0_bool);
		if(!var_568_bool) { //@nz
			@StopAsync();
			var_446_bool = false;
			return 8;
		}
		float var_571_float; int var_572_int;
		var_447_float = var_571_float;
		func_1365(var_455_string, var_571_float, var_572_int);
		var_454_int = 1;

		for(;;) {
			var_455_string = (("attack_middle" + var_572_int) + "_") + var_454_int;
			@HasAnimation(var_453_bool, "all", var_455_string);
			if(!var_453_bool) { //@nz
			} else {
				func_2775();
				@PlayAnimation("all", var_455_string);
				@WaitForAnimEnd();
				func_1743(var_455_string);
				bool var_594_bool;
				func_2203(var_594_bool, var_0_bool);
				if(!var_594_bool) { //@nz
					@StopAsync();
					var_446_bool = false;
					return 8;
				}
				float var_597_float; int var_598_int;
				var_447_float = var_597_float;
				var_452_int = var_598_int;
				func_1365(var_455_string, var_597_float, var_598_int);
				var_454_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_452_int));
		bool var_583_bool;
		func_1757(var_583_bool);
		if(var_583_bool != 0) {
			bool var_584_bool;
			func_1541(var_584_bool, 0.75);
			@StopAsync();
		}
		var_446_bool = true;
		return 8;

	}
}


// @pe
void func_1918(string var_193_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_194_string;
	var_193_string = var_194_string;
	func_2565(var_194_string);
	@PlayAnimation("all", var_193_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_193_string);
	@RemoveEnvelope();
}


void func_2432(void)
{
	bool var_303_bool;
	@CameraSwitchToNormal();
	bool var_304_bool;
	func_3538(var_304_bool);
	if(var_304_bool != 0) {
	} else {
		@HasAnimationTrack(var_303_bool, "head");
		if(var_303_bool == 0) goto Label_2448;
		@UnlookAsync("head");
	}
Label_2448:
	
}


// @pe
void func_2449(bool var_310_bool, object var_311_object)
{
	object var_313_object;
	var_311_object = var_313_object;
	bool var_312_bool;
	func_2457(var_312_bool, var_313_object, (float)70);
	var_312_bool = var_310_bool;
}


void func_2457(bool var_312_bool, object var_313_object, float var_314_float)
{
	cvector var_324_cvector;
	var_313_object->GetPosition(var_324_cvector);
	float var_323_float;
	var_313_object->GetEyesHeight(var_323_float);
	var_331_float = GetByIndex(var_324_cvector, 1);
	SetByIndex(var_324_cvector, 1) = (var_331_float + var_323_float);
	cvector var_325_cvector;
	@GetPosition(var_325_cvector);
	@GetEyesHeight(var_323_float);
	var_332_float = GetByIndex(var_325_cvector, 1);
	SetByIndex(var_325_cvector, 1) = (var_332_float + var_323_float);
	cvector var_326_cvector = var_324_cvector - var_325_cvector;
	var_333_float = GetByIndex(var_326_cvector, 1);
	SetByIndex(var_326_cvector, 1) = (float)0;
	var_335_float = sqrt(var_326_cvector | var_326_cvector);
	var_326_cvector /= var_335_float;
	cvector var_327_cvector = -var_326_cvector;
	cvector var_328_cvector = (var_326_cvector * var_314_float) - [0.0, 10.0, 0.0];
	bool var_330_bool;
	@IsOverrideActive(var_330_bool);
	if(var_330_bool != 0)
		var_312_bool = false;
	@StopWorld();
	@CameraTransit((var_325_cvector + var_328_cvector), var_327_cvector);
	var_339_float = GetByIndex(var_328_cvector, 0);
	var_340_float = GetByIndex(var_328_cvector, 2);
	@Rotate(var_339_float, var_340_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_312_bool = true;
}


void func_922(bool var_0_bool, object var_1_object, bool var_257_bool, object var_258_object, float var_259_float, float var_260_float, bool var_261_bool, bool var_262_bool)
{
	bool var_271_bool; object var_273_object; cvector var_274_cvector; cvector var_275_cvector; float var_277_float; object var_278_object;
	var_0_bool = false;
	var_1_object = var_258_object;
	bool var_272_bool;
	var_262_bool = var_272_bool;
	
	for(;;) {
		bool var_279_bool; object var_280_object;
		var_258_object = var_280_object;
		func_1062(var_279_bool, var_280_object);
		if(!var_279_bool) { //@nz
			var_257_bool = false;
			return 16;
		}
		var_258_object->GetPosition(var_274_cvector);
		@GetPosition(var_275_cvector);
		var_277_float = (var_274_cvector - var_275_cvector) | (var_274_cvector - var_275_cvector);
		bool var_284_bool = false;
		if(var_260_float > 0) {
			if(var_277_float > (var_260_float * var_260_float))
				var_284_bool = true;
		}
		if(var_284_bool != 0) {
			@Stop();
			var_257_bool = false;
			return 16;
		}
		if(var_277_float > (var_259_float * var_259_float)) {
			var_258_object->GetPFPosition(var_274_cvector);
			@FindPathTo(var_278_object, var_274_cvector);
			if(var_278_object != null) {
				var_278_object = var_273_object;
				var_278_object = null;
			}
			if(var_273_object != null) {
				if(var_272_bool == 0) goto Label_975;
				var_272_bool = false;
				@RotatePath(var_273_object, var_271_bool);
				if(!var_271_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_297_string;
						func_1069(var_297_string);
						string var_298_string;
						func_1071(var_298_string);
						@FollowPath(var_273_object, var_261_bool, var_271_bool, var_297_string, var_298_string);
						if(!var_271_bool) { //@nz
							if(var_0_bool == 0) goto Label_994;
							var_273_object = null;
						}
					EMIT "GOTO 0x3e3";

					Label_994:
						} else {
					var_273_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_271_bool);
					if(!var_271_bool) { //@nz
						if(var_0_bool != 0) {
							var_273_object = null;
							goto Label_1022;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1022;
		}
			var_278_object = null;
			goto Label_1020;

		Label_1020:
			var_273_object = null;

		}
	Label_1022:
		for(;;) {
			var_257_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_1950(object var_144_object)
{
	object var_145_object;
	var_144_object = var_145_object;
	func_2353(var_145_object);
	@PlayAnimation("all", "hunt");
	@WaitForAnimEnd();
}


void func_1962(void)
{
	@StopAnimation();
	@StopAsync();
}


void func_3504(bool var_20_bool, object var_21_object, object var_22_object, bool var_23_bool)
{
	bool var_25_bool;
	object var_27_object;
	var_22_object = var_27_object;
	bool var_26_bool;
	func_3202(var_26_bool, var_27_object, !var_23_bool);
	if(var_26_bool != 0) {
		@CanSee(var_25_bool, var_21_object);
		bool var_94_bool = true;
		if(var_25_bool != 1) {
			float var_96_float; object var_97_object;
			var_21_object = var_97_object;
			func_2064(var_96_float, var_97_object);
			var_105_bool = var_96_float <= 160000.0;
			if(var_105_bool != 1)
				var_94_bool = false;
		}
		if(var_94_bool != 0)
			var_20_bool = true;
	}
	var_20_bool = false;
}


// @pe
void func_2504(void)
{
	@CameraSwitchToNormal();
}


void func_3530(int var_200_int)
{
	var_200_int = 515572;
}


void func_3532(int var_199_int)
{
	var_199_int = 504031;
}


void func_2508(string var_289_string)
{
	float var_292_float; float var_293_float;
	@lshGetAnimTimes(var_289_string, var_292_float, var_293_float);
	@lshPlayAnimation(var_292_float, var_293_float, false);
}


void func_3534(string var_201_string)
{
	var_201_string = "ui/NPC_Citizen2.png";
}


void func_3536(string var_202_string)
{
	var_202_string = "ui/NPC_Citizen2_b.png";
}


void func_3538(bool var_194_bool)
{
	var_194_bool = false;
}


void func_2515(string var_223_string, bool var_224_bool)
{
	float var_229_float; float var_230_float;
	@lshGetAnimTimes(var_223_string, var_229_float, var_230_float);
	@lshPlayAnimation(var_229_float, var_230_float, var_224_bool);
}


void func_3540(bool var_20_bool, object var_21_object)
{
	float var_27_float; string var_28_string; float var_29_float;
	bool var_30_bool; object var_31_object;
	func_2203(var_30_bool, var_31_object);
	if(!var_30_bool) { //@nz
		var_20_bool = false;
		return 8;
	}
	var_65_object = GlobalVars[0];
	bool var_26_bool;
	var_65_object->in(var_26_bool, var_31_object);
	if(var_26_bool != 0) {
		var_20_bool = true;
		return 8;
	}
	bool var_67_bool; object var_68_object;
	func_2072(var_67_bool, var_68_object);
	if(var_67_bool != 0) {
		var_68_object->GetProperty("reputation", var_27_float);
		var_20_bool = var_27_float < 0.33;
		return 8;
	}
	bool var_73_bool; object var_74_object;
	func_2077(var_73_bool, var_74_object, "class");
	if(var_73_bool != 0) {
		var_74_object->GetProperty("class", var_28_string);
		bool var_77_bool = true;
		bool var_78_bool = true;
		var_80_bool = var_28_string == "bomber";
		if(var_80_bool != 1) {
			var_82_bool = var_28_string == "hunter";
			if(var_82_bool != 1)
				var_78_bool = false;
		}
		if(var_78_bool != 1) {
			var_84_bool = var_28_string == "grabitel";
			if(var_84_bool != 1)
				var_77_bool = false;
		}
		if(var_77_bool != 0) {
			var_20_bool = true;
			return 8;
		}
		bool var_85_bool = false;
		bool var_86_bool; string var_87_string;
		var_28_string = var_87_string;
		func_2606(var_86_bool, var_87_string);
		if(var_86_bool != 0) {
			bool var_125_bool; object var_126_object;
			func_2077(var_125_bool, var_126_object, "disease");
			if(var_125_bool != 0)
				var_85_bool = true;
		}
		if(var_85_bool != 0) {
			var_126_object->GetProperty("disease", var_29_float);
			var_20_bool = false;
			if(var_29_float > 0) {
				float var_131_float; object var_132_object;
				var_21_object = var_132_object;
				func_2064(var_131_float, var_132_object);
				if(var_131_float <= 490000.0)
					var_20_bool = true;
			}
			return 8;
		}
	}
	var_20_bool = false;
}


void func_2521(object var_247_object)
{
	float var_250_float;
	var_247_object->GetEyesHeight(var_250_float);
	cvector var_251_cvector = [0.0, 0.0, 0.0];
	var_252_float = GetByIndex(var_251_cvector, 1);
	var_250_float = var_252_float;
	SetByIndex(var_251_cvector, 1) = var_252_float;
	@LookAsync(var_247_object, "head", var_251_cvector);
}


void func_2532(void)
{
	bool var_20_bool;
	func_3538(var_20_bool);
	if(var_20_bool != 0)
		@lshStopSpeech();
}


void func_2539(string var_64_string, int var_65_int, int var_66_int)
{
	bool var_68_bool;
	int var_70_int;
	var_65_int = var_70_int;
	int var_71_int;
	var_66_int = var_71_int;
	bool var_69_bool;
	func_2731(var_69_bool, var_70_int, var_71_int);
	if(var_69_bool != 0)
		@AddItem(var_68_bool, var_64_string, 0);
}


void func_3062(void)
{
	@ClearSubContainer(0);
	int var_260_int;
	func_2757(var_260_int);
	int var_258_int;
	var_260_int = var_258_int;
	func_2863(0, (10 + (var_258_int * 5)));
	func_2539("bottle_water", 1, 3);
	func_2539("rusk", 1, 20);
	func_2539("hook", 1, 30);
	func_2539("watch", 1, 30);
	if(var_258_int >= 3)
		func_2550("alpha_pills", 1, 4, 3);
	if(var_258_int >= 4)
		func_2550("beta_pills", 1, 8, 3);
	if(var_258_int >= 6)
		func_2550("gamma_pills", 1, 16, 3);
}


void func_2550(string var_34_string, int var_35_int, int var_36_int, int var_37_int)
{
	int var_40_int; bool var_41_bool;
	int var_43_int;
	var_35_int = var_43_int;
	int var_44_int;
	var_36_int = var_44_int;
	bool var_42_bool;
	func_2731(var_42_bool, var_43_int, var_44_int);
	if(var_42_bool != 0) {
		@irand(var_40_int, var_37_int);
		@AddItem(var_41_bool, var_34_string, 0, (var_40_int + 1));
	}
}


// @pe
void func_2043(string var_525_string, int var_526_int)
{
	if(var_526_int == 2) {
		var_525_string = "fire";
		return 0;
	EMIT "GOTO 0x807";
	}
	if(var_526_int == 1) {
		var_525_string = "bullet";
		return 0;
	}
	var_525_string = "phys";
}


