// @GLOBALS: 0:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(1 != 0) {
			func_2681();
			if(var_18_object == 39999) {
				func_151(var_19_bool, "Neutral");
				var_0_object->SetMessage(538128); //@t
				var_0_object->ClearReplies(); //@t
				bool var_37_bool = false;
				bool var_38_bool;
				func_2843(var_1_object);
				if(var_38_bool != 0) {
					bool var_46_bool;
					func_2855(var_46_bool, var_1_object);
					if(var_46_bool != 0)
						var_37_bool = true;
				}
				if(var_37_bool != 0)
					var_0_object->AddReply(538129, 40001, 40000); //@t
				var_0_object->AddReply(538133, -1, 40004); //@t
				var_0_object->AddReply(538134, -1, 40005); //@t
				return 0;
			}
			if(var_18_object == 40001) {
				func_151(var_19_bool, "Neutral");
				var_0_object->SetMessage(538130); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538131, -1, 40002); //@t
				var_0_object->AddReply(538132, -1, 40003); //@t
				return 0;
			}
			var_3_string = true;
			bool var_76_bool;
			func_3614(var_76_bool);
			if(var_76_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xae";
	
	}

}


task task_2
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3560(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			object var_25_object;
			var_18_bool = var_25_object;
			func_3563(var_25_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_3569();
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
	}

}


maintask task_3
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		@SensePlayerOnly(true);
		func_3616();
		func_428();
	
		for(;;) {
			var_2_object = false;
			func_689(var_16_object, var_17_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3560(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_624(var_20_int);
			object var_28_object;
			var_18_bool = var_28_object;
			func_3563(var_28_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_3291(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_3374(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_624(var_20_int);
			object var_71_object;
			var_18_bool = var_71_object;
			func_3384(var_71_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_18_bool = var_24_object;
		object var_25_object;
		var_19_object = var_25_object;
		bool var_26_bool;
		var_20_bool = var_26_bool;
		bool var_23_bool;
		func_3645(var_23_bool, var_24_object, var_25_object, var_26_bool);
		if(var_23_bool != 0) {
			int var_85_int; object var_86_object; bool var_87_bool;
			var_18_bool = var_86_object;
			var_20_bool = var_87_bool;
			func_3467(var_86_object, var_87_bool);
			var_85_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_624(var_22_int);
				object var_123_object;
				var_18_bool = var_123_object;
				func_3474(var_123_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3509(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_624(var_20_int);
			object var_28_object;
			var_18_bool = var_28_object;
			func_3512();
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, string var_9_string, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		int var_21_int;
		object var_23_object;
		var_18_object = var_23_object;
		string var_24_string;
		var_19_bool = var_24_string;
		bool var_22_bool;
		func_3205(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_624(var_21_int);
			object var_51_object; string var_52_string;
			var_18_object = var_51_object;
			var_19_bool = var_52_string;
			func_3237(var_51_object, var_52_string);
		} else {
			int var_127_int; string var_128_string; object var_129_object;
			var_19_bool = var_128_string;
			var_18_object = var_129_object;
			func_3514(var_127_int, var_128_string, var_129_object);
			var_127_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_565;
			if(var_21_int > 1)
				func_624(var_21_int);
			string var_175_string; object var_176_object;
			var_19_bool = var_175_string;
			var_18_object = var_176_object;
			func_3526(var_175_string, var_176_object);
		}
	Label_565:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, string var_8_string, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		bool var_19_bool; string var_20_string;
		func_3304(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_624(var_20_string);
			string var_29_string;
			var_18_bool = var_29_string;
			func_3320(var_29_string);
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		bool var_19_bool; object var_20_object;
		func_3262(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_624(var_20_object);
			object var_32_object;
			var_18_bool = var_32_object;
			func_3285(var_32_object);
		} else {
			object var_34_object;
			func_649(var_34_object, var_34_object);
		}
	
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_19_object;
		func_649(var_19_object, var_19_object);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, int var_8_int, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		if(var_18_bool != 110) {
		}
		var_2_object = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_624(var_17_bool);
		func_3569();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_624(var_18_bool);
		object var_20_object;
		var_18_bool = var_20_object;
		func_3181();
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		@RequestClearPath(var_18_bool);
	}

	void OnActorStuck(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		@Stop();
	}

}


task task_4
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3560(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1027();
			object var_27_object;
			var_18_bool = var_27_object;
			func_3563(var_27_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_3291(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_3374(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1027();
			object var_70_object;
			var_18_bool = var_70_object;
			func_3384(var_70_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_18_bool = var_24_object;
		object var_25_object;
		var_19_object = var_25_object;
		bool var_26_bool;
		var_20_bool = var_26_bool;
		bool var_23_bool;
		func_3645(var_23_bool, var_24_object, var_25_object, var_26_bool);
		if(var_23_bool != 0) {
			int var_85_int; object var_86_object; bool var_87_bool;
			var_18_bool = var_86_object;
			var_20_bool = var_87_bool;
			func_3467(var_86_object, var_87_bool);
			var_85_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_1027();
				object var_122_object;
				var_18_bool = var_122_object;
				func_3474(var_122_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3509(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1027();
			object var_27_object;
			var_18_bool = var_27_object;
			func_3512();
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, string var_9_string, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		int var_21_int;
		object var_23_object;
		var_18_object = var_23_object;
		string var_24_string;
		var_19_bool = var_24_string;
		bool var_22_bool;
		func_3205(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_1027();
			object var_50_object; string var_51_string;
			var_18_object = var_50_object;
			var_19_bool = var_51_string;
			func_3237(var_50_object, var_51_string);
		} else {
			int var_126_int; string var_127_string; object var_128_object;
			var_19_bool = var_127_string;
			var_18_object = var_128_object;
			func_3514(var_126_int, var_127_string, var_128_object);
			var_126_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_910;
			if(var_21_int > 1)
				func_1027();
			string var_174_string; object var_175_object;
			var_19_bool = var_174_string;
			var_18_object = var_175_object;
			func_3526(var_174_string, var_175_object);
		}
	Label_910:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, string var_8_string, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		string var_20_string;
		var_18_bool = var_20_string;
		bool var_19_bool;
		func_3304(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_1027();
			string var_28_string;
			var_18_bool = var_28_string;
			func_3320(var_28_string);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_1027();
		func_3569();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_18_bool = var_20_object;
		bool var_19_bool;
		func_3262(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_1027();
			object var_31_object;
			var_18_bool = var_31_object;
			func_3285(var_31_object);
		}
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3560(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1231();
			object var_29_object;
			var_18_bool = var_29_object;
			func_3563(var_29_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_3291(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_3374(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1231();
			object var_72_object;
			var_18_bool = var_72_object;
			func_3384(var_72_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_18_bool = var_24_object;
		object var_25_object;
		var_19_object = var_25_object;
		bool var_26_bool;
		var_20_bool = var_26_bool;
		bool var_23_bool;
		func_3645(var_23_bool, var_24_object, var_25_object, var_26_bool);
		if(var_23_bool != 0) {
			int var_85_int; object var_86_object; bool var_87_bool;
			var_18_bool = var_86_object;
			var_20_bool = var_87_bool;
			func_3467(var_86_object, var_87_bool);
			var_85_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_1231();
				object var_124_object;
				var_18_bool = var_124_object;
				func_3474(var_124_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3509(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1231();
			object var_29_object;
			var_18_bool = var_29_object;
			func_3512();
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, string var_10_string, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		int var_21_int;
		object var_23_object;
		var_18_object = var_23_object;
		string var_24_string;
		var_19_bool = var_24_string;
		bool var_22_bool;
		func_3205(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_1231();
			object var_52_object; string var_53_string;
			var_18_object = var_52_object;
			var_19_bool = var_53_string;
			func_3237(var_52_object, var_53_string);
		} else {
			int var_128_int; string var_129_string; object var_130_object;
			var_19_bool = var_129_string;
			var_18_object = var_130_object;
			func_3514(var_128_int, var_129_string, var_130_object);
			var_128_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_1216;
			if(var_21_int > 1)
				func_1231();
			string var_176_string; object var_177_object;
			var_19_bool = var_176_string;
			var_18_object = var_177_object;
			func_3526(var_176_string, var_177_object);
		}
	Label_1216:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, string var_9_string, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		string var_20_string;
		var_18_bool = var_20_string;
		bool var_19_bool;
		func_3304(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_1231();
			string var_30_string;
			var_18_bool = var_30_string;
			func_3320(var_30_string);
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_1231();
		object var_21_object;
		var_18_bool = var_21_object;
		func_3181();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		if(var_18_bool != 111)
			return 4;
		bool var_25_bool;
		func_2406(var_25_bool, var_0_object);
		if(!var_25_bool) { //@nz
			func_1231();
			return 4;
		}
		cvector var_21_cvector;
		@GetDirection(var_21_cvector);
		cvector var_62_cvector;
		func_2260(var_62_cvector, var_0_object);
		cvector var_22_cvector;
		var_62_cvector = var_22_cvector;
		float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
		var_21_cvector = var_69_cvector;
		var_22_cvector = var_70_cvector;
		func_2782(var_68_float, var_69_cvector, var_70_cvector);
		if(var_68_float < 0.49999997)
			func_2556(var_0_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_1231();
		func_3569();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_18_bool = var_20_object;
		bool var_19_bool;
		func_3262(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_1231();
			object var_33_object;
			var_18_bool = var_33_object;
			func_3285(var_33_object);
		}
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_2053(var_17_bool);
		func_3569();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, int var_18_int)
	{
		if(var_18_int == 1) {
			func_2823(var_1_object);
		} else {
			int var_26_int;
			func_2197(var_17_bool, var_26_int, var_26_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object)
	{
		bool var_19_bool = false;
		if(var_1_object == var_18_object) {
			if(!var_2_object) //@nz
				var_19_bool = true;
		}
		if(var_19_bool != 0) {
			var_2_object = true;
			object var_22_object;
			var_18_object = var_22_object;
			func_2670(var_22_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object)
	{
		bool var_19_bool = false;
		if(var_1_object == var_18_object) {
			if(var_2_object != 0)
				var_19_bool = true;
		}
		if(var_19_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object)
	{
		@RequestClearPath(var_18_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object)
	{
		func_2053(var_18_object);
		object var_23_object;
		var_18_object = var_23_object;
		func_3181();
	}

}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object, string var_19_string)
{
	float var_21_float;
	if(var_19_string == "health") {
		@GetProperty("health", var_21_float);
		if(var_21_float <= 0)
			@SignalDeath(var_18_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	func_3160(var_19_object);
}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object, int var_19_int, float var_20_float, float var_21_float)
{
	object var_22_object;
	var_18_object = var_22_object;
	int var_23_int;
	var_19_int = var_23_int;
	float var_24_float;
	var_20_float = var_24_float;
	func_2474(var_22_object, var_23_int, var_24_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object, int var_19_int, float var_20_float, float var_21_float, cvector var_22_cvector, cvector var_23_cvector)
{
	object var_24_object;
	var_18_object = var_24_object;
	int var_25_int;
	var_19_int = var_25_int;
	float var_26_float;
	var_20_float = var_26_float;
	cvector var_27_cvector;
	var_22_cvector = var_27_cvector;
	cvector var_28_cvector;
	var_23_cvector = var_28_cvector;
	func_2542(var_26_float, var_27_cvector, var_28_cvector);
}


void func_0(object var_0_object, int var_42_int, object var_43_object)
{
	var_0_object = var_43_object;
	bool var_53_bool; object var_54_object;
	var_43_object = var_54_object;
	func_2572(var_53_bool, var_54_object, 70.0);
	if(!var_53_bool) { //@nz
		var_42_int = -2;
		return 8;
	}
	object var_49_object;
	@CreateDialog(var_49_object);
	int var_100_int;
	func_3608(var_100_int);
	var_49_object->SetNPCName(var_100_int);
	int var_101_int;
	func_3606(var_101_int);
	var_49_object->SetNPCDescription(var_101_int);
	string var_102_string;
	func_3610(var_102_string);
	var_49_object->SetPhoto(var_102_string);
	string var_103_string;
	func_3612(var_103_string);
	var_49_object->SetPhoto2(var_103_string);
	int var_104_int;
	func_2872(var_104_int);
	var_49_object->SetPlayerName(var_104_int);
	bool var_50_bool;
	@IsOverrideActive(var_50_bool);
	if(var_50_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	@DoDialog(var_49_object);
	object var_113_object; object var_114_object;
	var_43_object = var_113_object;
	var_49_object = var_114_object;
	TaskCall(1);
	func_74(var_115_object, var_116_object, var_117_string, var_118_bool, var_113_object, var_114_object);
	TaskReturn();
	bool var_52_bool;
	var_49_object->IsDialogEnd(var_52_bool);
	
	for(;;) {
		var_175_bool = !var_52_bool; //@nz
		if(var_175_bool == 0) goto Label_63;
		@sync();
		var_49_object->IsDialogEnd(var_52_bool);
	}
	
Label_63:
	object var_176_object;
	var_43_object = var_176_object;
	func_2640();
	@StopDialog(var_49_object);
	var_49_object->GetReturnValue(-1);
	int var_51_int = var_42_int;
}
EMIT "Stack[-4] = 0";


void func_1025(bool var_92_bool)
{
	var_92_bool = true;
}


void func_1027(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2053(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_2219(var_18_object);
}


// @pe
void func_3590(object var_59_object)
{
	object var_60_object;
	var_59_object = var_60_object;
	func_3366(var_60_object);
}


void func_2567(bool var_20_bool)
{
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
}


void func_1032(object var_0_object, object var_61_object)
{
	var_0_object = var_61_object;
	bool var_68_bool;
	func_1083(var_68_bool);
	cvector var_66_cvector;
	@GetDirection(var_66_cvector);
	cvector var_76_cvector;
	func_2260(var_76_cvector, var_0_object);
	cvector var_67_cvector;
	var_76_cvector = var_67_cvector;
	float var_82_float; cvector var_83_cvector; cvector var_84_cvector;
	var_66_cvector = var_83_cvector;
	var_67_cvector = var_84_cvector;
	func_2782(var_82_float, var_83_cvector, var_84_cvector);
	if(var_82_float < 0) {
		func_2556(var_0_object);
		var_68_bool = true;
	} else {
		@Sleep(1.5, var_68_bool);
	}
	if(var_68_bool != 0) {
		func_2556(var_0_object);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2572(bool var_53_bool, object var_54_object, float var_55_float)
{
	cvector var_66_cvector; bool var_73_bool;
	var_54_object->GetPosition(var_66_cvector);
	float var_65_float;
	var_54_object->GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_74_float + var_65_float);
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	@GetEyesHeight(var_65_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_75_float + var_65_float);
	cvector var_68_cvector = var_66_cvector - var_67_cvector;
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_78_float = sqrt(var_68_cvector | var_68_cvector);
	var_68_cvector /= var_78_float;
	cvector var_69_cvector = -var_68_cvector;
	cvector var_80_cvector;
	func_2735(var_80_cvector, (var_69_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_70_cvector = ((var_68_cvector * var_55_float) + (var_80_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_72_bool;
	@IsOverrideActive(var_72_bool);
	if(var_72_bool != 0)
		var_53_bool = false;
	@StopWorld();
	@CameraTransit((var_67_cvector + var_70_cvector), var_69_cvector);
	var_93_float = GetByIndex(var_70_cvector, 0);
	var_94_float = GetByIndex(var_70_cvector, 2);
	@Rotate(var_93_float, var_94_float);
	bool var_95_bool;
	func_3614(var_95_bool);
	if(var_95_bool != 0) {
	} else {
		@HasAnimationTrack(var_73_bool, "head");
		if(var_73_bool == 0) goto Label_2634;
		@LookAsyncCamera("head");
	}
Label_2634:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_53_bool = true;
	
}


// @pe
void func_3596(bool var_48_bool)
{
	var_48_bool = false;
}


void func_1550(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_217_bool; bool var_218_bool; cvector var_219_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_217_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_217_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_218_bool, ("attack" + (var_2_object + 1)));
			if(!var_218_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_219_cvector, "all", "bjump");
		var_233_float = GetByIndex(var_219_cvector, 2);
		var_4_bool = -var_233_float;

	}
}


// @pe
void func_3599(void)
{
}


// @pe
void func_3601(bool var_26_bool)
{
	var_26_bool = false;
}


// @pe
void func_3604(void)
{
}


void func_3606(int var_101_int)
{
	var_101_int = 515556;
}


void func_3608(int var_100_int)
{
	var_100_int = 503341;
}


void func_3610(string var_102_string)
{
	var_102_string = "ui/NPC_Citizen3.png";
}


void func_3612(string var_103_string)
{
	var_103_string = "ui/NPC_Citizen3_b.png";
}


void func_3614(bool var_95_bool)
{
	var_95_bool = false;
}


void func_3616(void)
{
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_3620(object var_30_object)
{
	bool var_32_bool;
	var_33_bool = GlobalVars[0];
	if(var_33_bool != 0) {
		@IsOverrideActive(var_32_bool);
		if(!var_32_bool) { //@nz
			object var_35_object;
			var_30_object = var_35_object;
			func_2895(var_35_object);
		}
	EMIT "GOTO 0xe37";
	}
	int var_42_int; object var_43_object;
	var_30_object = var_43_object;
	TaskCall(0);
	func_0(var_44_object, var_42_int, var_43_object);
	TaskReturn();
}


void func_2095(object var_0_object, object var_1_object, bool var_283_bool, object var_284_object, float var_285_float, float var_286_float, bool var_287_bool, bool var_288_bool)
{
	bool var_297_bool; object var_299_object; cvector var_300_cvector; cvector var_301_cvector; float var_303_float; object var_304_object;
	var_0_object = false;
	var_1_object = var_284_object;
	bool var_298_bool;
	var_288_bool = var_298_bool;
	
	for(;;) {
		bool var_305_bool; object var_306_object;
		var_284_object = var_306_object;
		func_2235(var_305_bool, var_306_object);
		if(!var_305_bool) { //@nz
			var_283_bool = false;
			return 16;
		}
		var_284_object->GetPosition(var_300_cvector);
		@GetPosition(var_301_cvector);
		var_303_float = (var_300_cvector - var_301_cvector) | (var_300_cvector - var_301_cvector);
		bool var_310_bool = false;
		if(var_286_float > 0) {
			if(var_303_float > (var_286_float * var_286_float))
				var_310_bool = true;
		}
		if(var_310_bool != 0) {
			@Stop();
			var_283_bool = false;
			return 16;
		}
		if(var_303_float > (var_285_float * var_285_float)) {
			var_284_object->GetPFPosition(var_300_cvector);
			@FindPathTo(var_304_object, var_300_cvector);
			if(var_304_object != null) {
				var_304_object = var_299_object;
				var_304_object = null;
			}
			if(var_299_object != null) {
				if(var_298_bool == 0) goto Label_2148;
				var_298_bool = false;
				@RotatePath(var_299_object, var_297_bool);
				if(!var_297_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_323_string;
						func_2242(var_323_string);
						string var_324_string;
						func_2244(var_324_string);
						@FollowPath(var_299_object, var_287_bool, var_297_bool, var_323_string, var_324_string);
						if(!var_297_bool) { //@nz
							if(var_0_object == 0) goto Label_2167;
							var_299_object = null;
						}
					EMIT "GOTO 0x878";

					Label_2167:
						} else {
					var_299_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_297_bool);
					if(!var_297_bool) { //@nz
						if(var_0_object != 0) {
							var_299_object = null;
							goto Label_2195;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2195;
		}
			var_304_object = null;
			goto Label_2193;

		Label_2193:
			var_299_object = null;

		}
	Label_2195:
		for(;;) {
			var_283_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_1585(object var_0_object, float var_497_float, int var_498_int)
{
	object var_502_object; float var_503_float; float var_504_float;
	@GetVictim((var_497_float * 0.9), var_502_object);
	@ReportAttack(var_0_object);
	if(var_502_object == var_0_object) {
		float var_508_float; object var_509_object; int var_510_int;
		var_502_object = var_509_object;
		var_498_int = var_510_int;
		func_1315(var_510_int);
		var_508_float = var_503_float;
		float var_511_float; object var_512_object; float var_513_float; int var_514_int;
		var_502_object = var_512_object;
		int var_515_int; object var_516_object; int var_517_int;
		var_502_object = var_516_object;
		var_498_int = var_517_int;
		func_1318(var_517_int);
		var_515_int = var_514_int;
		func_2292(var_511_float, var_512_object, var_513_float, var_514_int);
		var_511_float = var_504_float;
		int var_572_int;
		func_1968(var_572_int);
		@ReportHit(var_0_object, var_572_int, var_504_float, var_513_float);
		object var_573_object; float var_574_float;
		var_502_object = var_573_object;
		var_504_float = var_574_float;
		func_1975();
	}
}
EMIT "Stack[-3] = 0";


void func_3640(bool var_63_bool)
{
	var_63_bool = false;
}


// @pe
void func_3642(bool var_170_bool)
{
	var_170_bool = true;
}


void func_1083(object var_0_object)
{
	func_2670(var_0_object);
}


// @pe
void func_3645(bool var_23_bool, object var_24_object, object var_25_object, bool var_26_bool)
{
	object var_28_object;
	var_24_object = var_28_object;
	object var_29_object;
	var_25_object = var_29_object;
	bool var_31_bool;
	var_26_bool = var_31_bool;
	bool var_27_bool;
	func_3480(var_27_bool, var_28_object, var_29_object, 700.0, var_31_bool);
	var_27_bool = var_23_bool;
}


// @pe
void func_3655(object var_101_object)
{
	bool var_102_bool; object var_103_object;
	func_2275(var_102_bool, var_103_object);
	if(var_102_bool != 0) {
		object var_106_object;
		func_2729(var_106_object);
		@ReportReputationChange(var_103_object, var_106_object, -0.07, true);
		func_2980(true);
	}
	func_2956();
	var_245_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_113_object, object var_114_object)
{
	var_0_object = var_114_object;
	var_1_object = var_113_object;
	var_3_string = false;
	if(1 != 0) {
		func_151(var_114_object, "Neutral");
		var_0_object->SetMessage(538128); //@t
		var_0_object->ClearReplies(); //@t
		bool var_133_bool = false;
		bool var_134_bool;
		func_2843(var_1_object);
		if(var_134_bool != 0) {
			bool var_142_bool;
			func_2855(var_142_bool, var_1_object);
			if(var_142_bool != 0)
				var_133_bool = true;
		}
		if(var_133_bool != 0)
			var_0_object->AddReply(538129, 40001, 40000); //@t
		var_0_object->AddReply(538133, -1, 40004); //@t
		var_0_object->AddReply(538134, -1, 40005); //@t
		goto Label_121;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_121:
	bool var_162_bool;
	func_3614(var_162_bool);
	if(var_162_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2657(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_150;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_150:
		return 0;

	}
	
}


void func_2640(void)
{
	bool var_178_bool;
	@CameraSwitchToNormal();
	bool var_179_bool;
	func_3614(var_179_bool);
	if(var_179_bool != 0) {
	} else {
		@HasAnimationTrack(var_178_bool, "head");
		if(var_178_bool == 0) goto Label_2656;
		@UnlookAsync("head");
	}
Label_2656:
	
}


void func_3155(int var_138_int, string var_139_string)
{
	int var_141_int;
	@GetInvItemByName(var_141_int, var_139_string);
	var_141_int = var_138_int;
}


void func_1624(object var_0_object, object var_1_object, bool var_460_bool, float var_461_float)
{
	string var_469_string;
	func_1963(var_469_string);
	int var_466_int;
	@irand(var_466_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2832();
	@PlayAnimation("all", ("attack_begin" + (var_466_int + 1)));
	@WaitForAnimEnd();
	int var_468_int;
	func_1931(var_468_int, var_469_string);
	bool var_494_bool;
	func_2406(var_494_bool, var_0_object);
	if(!var_494_bool) { //@nz
		@StopAsync();
		var_460_bool = false;
		return 8;
	}
	float var_497_float; int var_498_int;
	var_461_float = var_497_float;
	var_466_int = var_498_int;
	func_1585(var_469_string, var_497_float, var_498_int);
	bool var_467_bool;
	@HasAnimation(var_467_bool, "all", ("attack_middle" + var_466_int));
	if(var_467_bool != 0) {
		func_2832();
		@PlayAnimation("all", ("attack_middle" + var_466_int));
		@WaitForAnimEnd();
		func_1963(var_469_string);
		bool var_582_bool;
		func_2406(var_582_bool, var_0_object);
		if(!var_582_bool) { //@nz
			@StopAsync();
			var_460_bool = false;
			return 8;
		}
		float var_585_float; int var_586_int;
		var_461_float = var_585_float;
		func_1585(var_469_string, var_585_float, var_586_int);
		var_468_int = 1;

		for(;;) {
			var_469_string = (("attack_middle" + var_586_int) + "_") + var_468_int;
			@HasAnimation(var_467_bool, "all", var_469_string);
			if(!var_467_bool) { //@nz
			} else {
				func_2832();
				@PlayAnimation("all", var_469_string);
				@WaitForAnimEnd();
				func_1963(var_469_string);
				bool var_608_bool;
				func_2406(var_608_bool, var_0_object);
				if(!var_608_bool) { //@nz
					@StopAsync();
					var_460_bool = false;
					return 8;
				}
				float var_611_float; int var_612_int;
				var_461_float = var_611_float;
				var_466_int = var_612_int;
				func_1585(var_469_string, var_611_float, var_612_int);
				var_468_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_466_int));
		bool var_597_bool;
		func_1977(var_597_bool);
		if(var_597_bool != 0) {
			bool var_598_bool;
			func_1761(var_598_bool, 0.75);
			@StopAsync();
		}
		var_460_bool = true;
		return 8;

	}
}


// @pe
void func_3160(object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	TaskCall(2);
	func_257(var_20_object);
	TaskReturn();
}


void func_2657(string var_164_string)
{
	float var_167_float; float var_168_float;
	@lshGetAnimTimes(var_164_string, var_167_float, var_168_float);
	@lshPlayAnimation(var_167_float, var_168_float, false);
}


void func_2664(string var_124_string, bool var_125_bool)
{
	float var_130_float; float var_131_float;
	@lshGetAnimTimes(var_124_string, var_130_float, var_131_float);
	@lshPlayAnimation(var_130_float, var_131_float, var_125_bool);
}


void func_2670(object var_22_object)
{
	float var_25_float;
	var_22_object->GetEyesHeight(var_25_float);
	cvector var_26_cvector = [0.0, 0.0, 0.0];
	var_27_float = GetByIndex(var_26_cvector, 1);
	var_25_float = var_27_float;
	SetByIndex(var_26_cvector, 1) = var_27_float;
	@LookAsync(var_22_object, "head", var_26_cvector);
}


void func_624(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_760(var_17_object, var_18_bool);
}


void func_632(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_767(var_22_bool, var_23_int);
}


void func_2681(void)
{
	bool var_21_bool;
	func_3614(var_21_bool);
	if(var_21_bool != 0)
		@lshStopSpeech();
}


void func_2688(string var_44_string)
{
	bool var_53_bool; int var_54_int; bool var_55_bool; int var_56_int; bool var_57_bool; float var_58_float; cvector var_59_cvector; cvector var_60_cvector;
	@IsExisting3DSound(var_53_bool, var_44_string);
	if(!var_53_bool) { //@nz
		var_54_int = 0;

		for(;;) {
			@IsExisting3DSound(var_55_bool, (var_44_string + (var_54_int + 1)));
			if(!var_55_bool) { //@nz
				break;
			Label_2708:
				@irand(var_56_int, var_54_int);
				var_44_string += (var_56_int + 1);
	}
			@Is3DSoundLoaded(var_57_bool, var_44_string);
			if(var_57_bool != 0) {
				@GetEyesHeight(var_58_float);
				@GetDirection(var_59_cvector);
				var_60_cvector = var_59_cvector * 50;
				var_71_float = GetByIndex(var_60_cvector, 1);
				SetByIndex(var_60_cvector, 1) = (var_71_float + var_58_float);
				@PlayGlobalSound(var_44_string, var_60_cvector);
			}
		}
		var_54_int += 1;
	}
	var_66_bool = !var_54_int; //@nz
	if(var_66_bool == 0) goto Label_2708;
}


// @pe
void func_3205(bool var_22_bool, object var_23_object, string var_24_string)
{
	if(var_24_string == "unholster") {
		bool var_27_bool; object var_28_object;
		var_23_object = var_28_object;
		func_3570(var_28_object);
		var_27_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0xca3";
	}
	if(var_24_string == "player_shot") {
		bool var_31_bool; object var_32_object;
		var_23_object = var_32_object;
		func_3575(var_31_bool, var_32_object);
		var_31_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0xca3";
	}
	if(var_24_string == "battle") {
		bool var_48_bool; object var_49_object;
		var_23_object = var_49_object;
		func_3596(var_49_object);
		var_48_bool = var_22_bool;
		return 0;
	}
	var_22_bool = false;
}


void func_649(object var_2_object, object var_19_object)
{
	bool var_24_bool; object var_25_object;
	func_2406(var_24_bool, var_25_object);
	if(!var_24_bool) //@nz
		return 4;
	if(var_2_object != 0)
		return 4;
	bool var_22_bool;
	@IsPlayerActor(var_25_object, var_22_bool);
	if(!var_22_bool) //@nz
		return 4;
	int var_61_int; object var_62_object;
	var_19_object = var_62_object;
	func_3357(var_62_object);
	int var_23_int;
	var_61_int = var_23_int;
	if(var_23_int > 0) {
		if(var_23_int > 1)
			func_632(var_23_int);
		object var_69_object;
		var_19_object = var_69_object;
		func_3366(var_69_object);
		var_2_object = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_2197(object var_0_object, object var_1_object, int var_26_int)
{
	if(var_26_int != 0)
		return 0;
	bool var_29_bool;
	func_2235(var_29_bool, var_1_object);
	if(!var_29_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_151(object var_2_object, string var_120_string)
{
	bool var_121_bool;
	func_3614(var_121_bool);
	if(!var_121_bool) //@nz
		return 0;
	if(var_120_string == var_2_object)
		return 0;
	string var_124_string; bool var_125_bool;
	var_120_string = var_124_string;
	if(var_120_string == "")
		var_125_bool = false;
	else
		var_125_bool = true;
	func_2664(var_124_string, var_125_bool);
	var_2_object = var_120_string;
	
}


// @pe
void func_3237(object var_52_object, string var_53_string)
{
	if(var_53_string == "unholster") {
		object var_56_object;
		var_52_object = var_56_object;
		func_3573();
	} else if(var_53_string == "player_shot") {
			object var_59_object;
			var_52_object = var_59_object;
			func_3590(var_59_object);
	}
Label_3261:
	for(;;) {

	}
	
	if(!(var_53_string == "battle")) goto Label_3261;
	object var_127_object;
	var_52_object = var_127_object;
	func_3599();
}


void func_2729(object var_106_object)
{
	object var_108_object;
	@self(var_108_object);
	var_108_object = var_106_object;
}
EMIT "Stack[-1] = 0";


void func_2219(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2735(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_59_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_59_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_59_float;
}


void func_689(object var_0_object, object var_1_object)
{
	float var_30_float; cvector var_31_cvector; cvector var_32_cvector; bool var_33_bool; object var_34_object; bool var_35_bool;
	@rand(var_30_float, 0.5);
	@Sleep(var_30_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_701:
				@GetPosition(var_32_cvector);
				float var_39_float;
				func_748(var_39_float);
				@GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool);
				if(var_33_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_701;
			}
				var_1_object = false;
		}
		}
		goto Label_717;

	Label_717:
		object var_43_object; cvector var_44_cvector;
		var_31_cvector = var_44_cvector;
		func_776(var_43_object, var_44_cvector);
		var_43_object = var_34_object;
		if(var_34_object != null) {
			@RotatePath(var_34_object, var_35_bool);
			if(var_35_bool != 0) {
				bool var_49_bool;
				func_774(var_49_bool);
				@FollowPath(var_34_object, var_49_bool, var_35_bool);
				var_34_object = null;
				if(var_35_bool != 0) {
					TaskCall(4);
					func_946();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_34_object = null;
	}
	
}


// @pe
void func_2745(float var_549_float, float var_550_float, float var_551_float)
{
	if(var_550_float < var_551_float)
		var_550_float = var_549_float;
	else
		var_551_float = var_549_float;
	
}


// @pe
void func_2235(bool var_29_bool, object var_30_object)
{
	object var_32_object;
	var_30_object = var_32_object;
	bool var_31_bool;
	func_2406(var_31_bool, var_32_object);
	var_31_bool = var_29_bool;
}


void func_3262(bool var_19_bool, object var_20_object)
{
	bool var_22_bool;
	bool var_23_bool = false;
	bool var_24_bool; object var_25_object;
	var_20_object = var_25_object;
	func_3570(var_25_object);
	if(var_24_bool != 0) {
		bool var_26_bool; object var_27_object;
		func_2275(var_26_bool, var_27_object);
		if(var_26_bool != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		var_27_object->IsWeaponHolstered(var_22_bool);
		if(!var_22_bool) //@nz
			var_19_bool = true;
	}
	var_19_bool = false;
}


// @pe
void func_2752(float var_559_float, float var_560_float, float var_561_float, float var_562_float)
{
	if(var_560_float < var_561_float) {
		var_561_float = var_559_float;
		return 0;
	}
	if(var_560_float > var_562_float) {
		var_562_float = var_559_float;
		return 0;
	}
	var_560_float = var_559_float;
}


void func_2242(string var_323_string)
{
	var_323_string = "walk";
}


void func_2244(string var_324_string)
{
	var_324_string = "run";
}


// @pe
void func_2246(string var_539_string, int var_540_int)
{
	if(var_540_int == 2) {
		var_539_string = "fire";
		return 0;
	EMIT "GOTO 0x8d2";
	}
	if(var_540_int == 1) {
		var_539_string = "bullet";
		return 0;
	}
	var_539_string = "phys";
}


// @pe
void func_2763(float var_71_float, cvector var_72_cvector, cvector var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_71_float = (var_74_float * var_75_float) + (var_77_float * var_78_float);
}


void func_1231(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_2260(cvector var_52_cvector, object var_53_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_53_object->GetPosition(var_57_cvector);
	var_52_cvector = var_57_cvector - var_56_cvector;
}


// @pe
void func_3285(object var_33_object)
{
	object var_34_object;
	var_33_object = var_34_object;
	func_3573();
}


// @pe
void func_2772(float var_80_float, cvector var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0);
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_85_float = GetByIndex(var_81_cvector, 2);
	var_86_float = GetByIndex(var_81_cvector, 2);
	var_80_float = sqrt((var_82_float * var_83_float) + (var_85_float * var_86_float));
}


// @pe
void func_3291(object var_21_object)
{
	bool var_22_bool; object var_23_object;
	func_2275(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		object var_26_object;
		func_2729(var_26_object);
		@ReportReputationChange(var_23_object, var_26_object, -0.03);
	}
}


void func_2267(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


// @pe
void func_2782(float var_68_float, cvector var_69_cvector, cvector var_70_cvector)
{
	cvector var_72_cvector;
	var_69_cvector = var_72_cvector;
	cvector var_73_cvector;
	var_70_cvector = var_73_cvector;
	float var_71_float;
	func_2763(var_71_float, var_72_cvector, var_73_cvector);
	float var_80_float; cvector var_81_cvector;
	var_69_cvector = var_81_cvector;
	func_2772(var_80_float, var_81_cvector);
	float var_89_float; cvector var_90_cvector;
	var_70_cvector = var_90_cvector;
	func_2772(var_89_float, var_90_cvector);
	var_68_float = var_71_float / (var_80_float * var_89_float);
}


void func_1761(bool var_598_bool, float var_599_float)
{
	float var_602_float; bool var_603_bool;
	@rand(var_602_float);
	if(var_602_float < var_599_float) {

		for(;;) {
			@IsAnimationPlaying(var_603_bool);
			if(!var_603_bool) { //@nz
			} else {
				bool var_606_bool;
				func_1859(var_606_bool);
				if(var_606_bool != 0) {
					var_598_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_598_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1963(var_603_bool);
}


void func_2275(bool var_102_bool, object var_103_object)
{
	bool var_105_bool;
	@IsPlayerActor(var_103_object, var_105_bool);
	var_105_bool = var_102_bool;
}


void func_3304(bool var_19_bool, string var_20_string)
{
	object var_22_object;
	if(var_20_string == "heal") {
		@FindActor(var_22_object, "player");
		bool var_26_bool; object var_27_object;
		var_22_object = var_27_object;
		func_3601(var_27_object);
		var_26_bool = var_19_bool;
	EMIT "Stack[-1] = 0";
	}
	var_19_bool = false;
}


void func_2280(bool var_53_bool, object var_54_object, string var_55_string)
{
	var_60_bool = IsFuncExist(var_54_object, "HasProperty", 2);
	if(!var_60_bool) { //@nz
		var_53_bool = false;
		return 2;
	}
	bool var_57_bool;
	var_54_object->HasProperty(var_55_string, var_57_bool);
	var_57_bool = var_53_bool;
}


void func_748(float var_39_float)
{
	float var_41_float;
	@GetCameraFarDistance(var_41_float);
	var_41_float = var_39_float;
}


void func_2799(int var_136_int, string var_137_string)
{
	int var_139_int;
	@GetVariable(var_137_string, var_139_int);
	var_139_int = var_136_int;
}


void func_2292(float var_511_float, object var_512_object, float var_513_float, int var_514_int)
{
	int var_524_int; int var_526_int;
	object var_531_object;
	var_512_object = var_531_object;
	bool var_530_bool;
	func_2280(var_530_bool, var_531_object, "health");
	if(!var_530_bool) //@nz
		var_511_float = 0.0;
	bool var_534_bool; object var_535_object;
	func_2280(var_534_bool, var_535_object, "armor");
	if(!var_534_bool) //@nz
		var_524_int = 0;
	else
		var_535_object->GetProperty("armor", var_524_int);
	string var_539_string; int var_540_int;
	var_514_int = var_540_int;
	func_2246(var_539_string, var_540_int);
	string var_525_string = "armor_" + var_539_string;
	bool var_545_bool; object var_546_object; string var_547_string;
	var_512_object = var_546_object;
	func_2280(var_545_bool, var_546_object, var_547_string);
	if(!var_545_bool) //@nz
		var_526_int = 0;
	else
		var_512_object->GetProperty(var_547_string, var_526_int);

	float var_549_float;
	func_2745(var_549_float, ((var_524_int + var_526_int) / 100.0), (float)1);
	float var_527_float;
	var_549_float = var_527_float;
	float var_528_float;
	var_512_object->GetProperty("health", var_528_float);
	float var_529_float = var_513_float * (1 - var_527_float);
	float var_559_float;
	func_2752(var_559_float, (var_528_float - var_529_float), (float)0, (float)1);
	var_512_object->SetProperty("health", var_559_float);
	bool var_565_bool; object var_566_object;
	var_512_object = var_566_object;
	func_2275(var_565_bool, var_566_object);
	if(var_565_bool != 0) {
		float var_567_float = -var_529_float;
		func_2804(var_567_float);
	}
	var_529_float = var_511_float;
	
}


void func_2804(float var_567_float)
{
	object var_569_object;
	@CreateFloatVector(var_569_object);
	var_569_object->add(var_567_float);
	@SendWorldWndMessage(15, var_569_object);
}
EMIT "Stack[-1] = 0";


void func_3320(string var_30_string)
{
	object var_32_object;
	if(var_30_string == "heal") {
		@FindActor(var_32_object, "player");
		object var_36_object;
		var_32_object = var_36_object;
		func_3604();
		var_32_object = null;
	}
}


void func_760(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1788(object var_0_object, bool var_403_bool, float var_404_float)
{
	bool var_410_bool; cvector var_411_cvector; cvector var_412_cvector; cvector var_413_cvector; float var_414_float;
	
	for(;;) {
		@IsAnimationPlaying(var_410_bool);
		if(!var_410_bool) //@nz
			break;
		bool var_416_bool;
		func_1859(var_416_bool);
		if(var_416_bool != 0) {
			var_403_bool = true;
			return 10;
		}
		bool var_455_bool;
		func_2406(var_455_bool, var_0_object);
		if(!var_455_bool) { //@nz
			var_403_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_411_cvector); //@t
		@GetPFPosition(var_412_cvector);
		var_413_cvector = var_411_cvector - var_412_cvector;
		var_414_float = var_413_cvector | var_413_cvector;
		if(var_414_float < (var_404_float * var_404_float)) {
			bool var_460_bool; float var_461_float;
			var_404_float = var_461_float;
			func_1624(var_413_cvector, var_414_float, var_460_bool, var_461_float);
			var_403_bool = true;
			return 10;
		}
		@sync();
	}
	func_1963(var_414_float);
	var_403_bool = false;
}


void func_2814(int var_120_int)
{
	float var_122_float;
	@GetGameTime(var_122_float);
	var_120_int = 1 + (var_122_float / 24);
}


void func_767(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_257(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_290(var_21_object);
	object var_101_object;
	var_20_object = var_101_object;
	func_3655(var_101_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_3333(string var_73_string, int var_74_int)
{
	string var_76_string = "idle";
	if(var_74_int != 0)
		var_76_string += var_74_int;
	var_76_string = var_73_string;
}


void func_774(bool var_49_bool)
{
	var_49_bool = false;
}


void func_2823(object var_21_object)
{
	bool var_23_bool;
	@IsPlayerActor(var_21_object, var_23_bool);
	if(var_23_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_776(object var_43_object, cvector var_44_cvector)
{
	object var_46_object;
	@FindShiftedPathTo(var_46_object, var_44_cvector);
	var_46_object = var_43_object;
}
EMIT "Stack[-1] = 0";


void func_3340(int var_67_int)
{
	int var_70_int; bool var_71_bool;
	var_70_int = 0;
	
	for(;;) {
		string var_73_string; int var_74_int;
		var_70_int = var_74_int;
		func_3333(var_73_string, var_74_int);
		@HasAnimation(var_71_bool, "all", var_73_string);
		if(!var_71_bool) //@nz
			break;
		var_70_int += 1;
	}
	var_70_int = var_67_int;
}


void func_2832(void)
{
	object var_473_object;
	@GetScene(var_473_object);
	object var_475_object;
	func_2729(var_475_object);
	@BroadcastMessage("battle", var_475_object, var_473_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2843(bool var_134_bool)
{
	int var_136_int;
	func_2799(var_136_int, "branch");
	if(var_136_int == 0) {
		var_134_bool = true;
		return 0;
	}
	var_134_bool = false;
}


// @pe
void func_1307(object var_182_object)
{
	object var_189_object;
	func_1321(var_185_int, var_186_bool, var_187_float, var_188_int, var_189_object, var_189_object, true, 180.0);
}


// @pe
void func_3357(int var_61_int)
{
	bool var_63_bool;
	func_3640(var_63_bool);
	if(var_63_bool != 0)
		var_61_int = 2;
	else
		var_61_int = 0;
	
}


void func_290(object var_21_object)
{
	cvector var_32_cvector; cvector var_33_cvector; cvector var_34_cvector; cvector var_35_cvector; string var_36_string; object var_37_object; bool var_38_bool; bool var_39_bool; float var_40_float; cvector var_41_cvector;
	if(var_21_object == null) {
		func_381("fdie");
	} else {
		var_21_object->GetPosition(var_32_cvector);
		@GetPosition(var_33_cvector);
		@GetDirection(var_34_cvector);
		var_35_cvector = var_33_cvector - var_32_cvector;
		var_75_float = GetByIndex(var_35_cvector, 0);
		var_76_float = GetByIndex(var_34_cvector, 0);
		var_78_float = GetByIndex(var_35_cvector, 2);
		var_79_float = GetByIndex(var_34_cvector, 2);
		if(((var_75_float * var_76_float) + (var_78_float * var_79_float)) >= 0)
			var_36_string = "fdie";
		else
			var_36_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_21_object = var_37_object;
		var_86_bool = IsFuncExist(var_21_object, "GetScriptProperty", 2);
		if(var_86_bool != 0) {
			var_21_object->HasScriptProperty(var_38_bool, "Owner");
			if(var_38_bool != 0) {
				var_21_object->GetScriptProperty(var_37_object, "Owner");
				if(var_37_object == null)
					var_21_object = var_37_object;
			}
		}
		var_93_bool = IsFuncExist(var_37_object, "@GetEyesHeight", 1);
		if(var_93_bool != 0) {
			var_37_object->GetEyesHeight(var_40_float);
			var_41_cvector = [0.0, 0.0, 0.0];
			var_94_float = GetByIndex(var_41_cvector, 1);
			var_40_float = var_94_float;
			SetByIndex(var_41_cvector, 1) = var_94_float;
			@LookAsync(var_21_object, "head", var_41_cvector);
			var_39_bool = true;
		} else {
			var_39_bool = false;

		}
		string var_96_string;
		var_36_string = var_96_string;
		func_2688(var_96_string);
		@PlayAnimation("all", var_36_string);
		@WaitForAnimEnd();
		if(var_39_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_36_string);
		@RemoveEnvelope();
		var_37_object = null;
	}
	
}


// @pe
void func_1315(float var_508_float)
{
	var_508_float = 0.1;
}


// @pe
void func_3366(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	TaskCall(5);
	func_1032(var_62_object, var_61_object);
	TaskReturn();
}


// @pe
void func_2855(bool var_142_bool, object var_143_object)
{
	object var_145_object;
	var_143_object = var_145_object;
	func_2865(var_145_object);
	bool var_144_bool;
	if(var_144_bool != 0) {
		var_142_bool = true;
		return 0;
	}
	var_142_bool = false;
}


// @pe
void func_1318(int var_515_int)
{
	var_515_int = 0;
}


void func_1321(object var_0_object, string var_3_string, bool var_5_bool, object var_189_object, bool var_190_bool, float var_191_float, bool var_266_bool, bool var_352_bool)
{
	float var_203_float; cvector var_204_cvector; cvector var_205_cvector; bool var_207_bool; float var_210_float; cvector var_211_cvector; bool var_212_bool; float var_213_float;
	func_1550(var_211_cvector, var_212_bool, var_213_float);
	var_5_bool = 0;
	var_238_bool = IsFuncExist(var_189_object, "@GetAttackDistance", 1);
	if(var_238_bool != 0) {
		var_189_object->GetAttackDistance(var_203_float);
		var_203_float += 50;
	} else {
						var_191_float = var_203_float;
	}
	if(var_203_float >= 150)
		var_203_float = 150;
	var_3_string = false;
	var_0_object = var_189_object;
	bool var_206_bool;
	@IsPlayerActor(var_0_object, var_206_bool);
	if(var_206_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_244_object;
		func_2729(var_244_object);
		@SendPlayerEnemy(var_189_object, var_244_object);
	}
	if(var_190_bool != 0)
		var_207_bool = false;
	else
		var_207_bool = true;

	
Label_1361:
	for(;;) {
		bool var_249_bool = false;
		bool var_250_bool;
		func_2406(var_250_bool, var_0_object);
		if(var_250_bool != 0) {
			if(!var_3_string) //@nz
				var_249_bool = true;
		}
		if(var_249_bool != 0) {
			func_1963(var_213_float);
			var_0_object->GetPFPosition(var_204_cvector); //@t
			@GetPFPosition(var_205_cvector);
			var_210_float = (var_204_cvector - var_205_cvector) | (var_204_cvector - var_205_cvector);
			if(var_210_float >= ((400.0 + var_203_float) * (400.0 + var_203_float))) {
				bool var_260_bool; float var_262_float;
				var_203_float = var_262_float;
				TaskCall(7);
				func_1990(var_268_bool, var_260_bool, var_0_object, var_262_float, 3000.0, true, false);
				TaskReturn();
				if(!var_266_bool) { //@nz
				} else {
					var_207_bool = false;
			} else {
			if(var_210_float >= (var_191_float * var_191_float)) {
				var_0_object->GetPFPosition(var_211_cvector); //@t
				@CanReachByPF(var_212_bool, var_211_cvector);
				if(!var_212_bool) { //@nz
					bool var_346_bool; float var_348_float;
					var_203_float = var_348_float;
					TaskCall(7);
					func_1990(var_354_bool, var_346_bool, var_0_object, var_348_float, 3000.0, true, false);
					TaskReturn();
					if(!var_352_bool) { //@nz
						goto Label_1533;
					}
					var_207_bool = false;
					goto Label_1361;
				}
				if(!var_207_bool) { //@nz
					func_2556(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1963(var_213_float);
					@StopAsync();
					var_207_bool = true;
					bool var_360_bool;
					func_2406(var_360_bool, var_0_object);
					if(!var_360_bool) { //@nz
						goto Label_1533;
					}
				}
				@rand(var_213_float);
				bool var_363_bool;
				var_365_bool = var_213_float < 0.25;
				if(var_365_bool != 1) {
					bool var_366_bool;
					func_1920(true, var_366_bool);
					if(var_366_bool != 1)
						var_363_bool = false;
				}
				if(var_363_bool != 0) {
					@Face(var_0_object);
					func_1970();
					@PlayAnimation("all", "attack_stay");
					bool var_403_bool; float var_404_float;
					func_1788(var_213_float, var_403_bool, var_404_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1963(var_213_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_617_bool;
					func_1920(var_213_float, var_617_bool);
					var_618_bool = !var_617_bool; //@nz
					if(var_618_bool == 0) goto Label_1523;
					bool var_619_bool;
					func_2406(var_619_bool, var_0_object);
					if(!var_619_bool) { //@nz
						goto Label_1533;
					}
					var_0_object->GetPFPosition(var_204_cvector); //@t
					@GetPFPosition(var_205_cvector);
					if(!(((var_204_cvector - var_205_cvector) | (var_204_cvector - var_205_cvector)) < (var_404_float * var_404_float))) goto Label_1523;
					bool var_624_bool; float var_625_float;
					var_191_float = var_625_float;
					func_1624(var_212_bool, var_213_float, var_624_bool, var_625_float);
					var_626_bool = !var_624_bool; //@nz
					if(var_626_bool == 0) goto Label_1523;
					goto Label_1533;
			}
				bool var_627_bool; float var_628_float;
				var_191_float = var_628_float;
				func_1624(var_212_bool, var_213_float, var_627_bool, var_628_float);
				if(!var_627_bool) { //@nz
					goto Label_1533;
				}
				var_207_bool = true;

			}
		Label_1523:
			goto Label_1532;
			}
			Label_1532:
			}
		}
	Label_1533:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_206_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1831(object var_0_object, bool var_418_bool)
{
	cvector var_424_cvector; cvector var_425_cvector;
	bool var_429_bool;
	func_2406(var_429_bool, var_0_object);
	if(!var_429_bool) { //@nz
		var_418_bool = false;
		return 10;
	}
	bool var_432_bool;
	float var_428_float;
	func_1920(var_428_float, var_432_bool);
	if(var_432_bool != 0) {
		var_0_object->GetPFPosition(var_424_cvector); //@t
		@GetPFPosition(var_425_cvector);
		var_0_object->GetAttackDistance(var_428_float); //@t
		var_418_bool = ((var_424_cvector - var_425_cvector) | (var_424_cvector - var_425_cvector)) <= ((var_428_float + 50) * (var_428_float + 50));
		return 10;
	}
	var_418_bool = false;
}


// @pe
void func_3374(int var_88_int, object var_89_object)
{
	object var_91_object;
	var_89_object = var_91_object;
	bool var_90_bool;
	func_2406(var_90_bool, var_91_object);
	if(var_90_bool != 0)
		var_88_int = 2;
	else
		var_88_int = 0;
	
}


// @pe
void func_2865(bool var_144_bool)
{
	int var_146_int;
	func_2814(var_146_int);
	var_144_bool = var_146_int == 1;
}


void func_2872(int var_104_int)
{
	int var_106_int;
	@GetVariable("branch", var_106_int);
	if(var_106_int == 0) {
		var_104_int = 1;
		return 2;
	EMIT "GOTO 0xb47";
	}
	if(var_106_int == 1) {
		var_104_int = 2;
		return 2;
	}
	var_104_int = 3;
}


// @pe
void func_3384(object var_181_object)
{
	object var_182_object;
	var_181_object = var_182_object;
	TaskCall(6);
	func_1307(var_182_object);
	TaskReturn();
}


void func_2365(bool var_46_bool, object var_47_object)
{
	bool var_49_bool;
	var_47_object->IsDead(var_49_bool);
	var_49_bool = var_46_bool;
}


void func_3392(bool var_34_bool, object var_35_object, bool var_36_bool)
{
	bool var_41_bool; object var_42_object;
	func_2280(var_41_bool, var_42_object, "class");
	if(!var_41_bool) { //@nz
		var_34_bool = false;
		return 4;
	}
	string var_39_string;
	@GetProperty("class", var_39_string);
	string var_40_string;
	var_42_object->GetProperty("class", var_40_string);
	bool var_53_bool = false;
	if(!var_36_bool) { //@nz
		if(var_39_string == var_40_string)
			var_53_bool = true;
	}
	if(var_53_bool != 0) {
		var_34_bool = true;
		return 4;
	}
	if(var_40_string == "rat") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0xd89";
	}
	if(var_40_string == "rat_big") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0xd89";
	}
	if(var_40_string == "dog") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0xd89";
	}
	if(var_40_string == "grabitel") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0xd89";
	}
	if(var_40_string == "bomber") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0xd89";
	}
	if(var_40_string == "sanitar") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0xd89";
	}
	if(var_40_string == "hunter") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0xd89";
	}
	if(var_40_string == "soldier") {
		var_34_bool = false;
		return 4;
	}
	var_34_bool = true;
}


void func_2370(bool var_35_bool, object var_36_object)
{
	if(var_36_object == null) {
		var_35_bool = false;
		return 4;
	}
	bool var_42_bool = false;
	var_45_bool = IsFuncExist(var_36_object, "IsDead", 1);
	if(var_45_bool != 0) {
		bool var_46_bool; object var_47_object;
		var_36_object = var_47_object;
		func_2365(var_46_bool, var_47_object);
		if(var_46_bool != 0)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		var_35_bool = false;
		return 4;
	}
	object var_39_object;
	@GetScene(var_39_object);
	if(var_39_object == null) {
		var_35_bool = false;
		return 4;
	}
	object var_40_object;
	var_36_object->GetScene(var_40_object);
	if(var_39_object != var_40_object) {
		var_35_bool = false;
		return 4;
	}
	var_35_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1859(bool var_416_bool)
{
	bool var_417_bool = false;
	bool var_418_bool;
	func_1831(var_417_bool, var_418_bool);
	if(var_418_bool != 0) {
		bool var_435_bool;
		func_1875(var_416_bool, var_417_bool, var_435_bool);
		if(var_435_bool != 0)
			var_417_bool = true;
	}
	if(var_417_bool != 0) {
		var_416_bool = true;
		return 0;
	}
	var_416_bool = false;
}


void func_2889(int var_225_int)
{
	int var_227_int;
	@GetVariable("branch", var_227_int);
	var_227_int = var_225_int;
}


// @pe
void func_2895(object var_35_object)
{
	int var_36_int;
	func_2889(var_36_int);
	if(var_36_int == 1)
		@WorkWithCorpse(var_35_object);
	else
		@Barter(var_35_object);
	
}


void func_1875(object var_0_object, bool var_4_bool, bool var_435_bool)
{
	object var_441_object; float var_443_float; cvector var_444_cvector; cvector var_445_cvector;
	@GetScene(var_441_object);
	bool var_442_bool = false;
	
	for(;;) {
		cvector var_446_cvector;
		func_2260(var_446_cvector, var_0_object);
		var_448_int = -var_446_cvector;
		@FindDirLength(var_443_float, var_448_int, var_4_bool);
		if(var_443_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_444_cvector); //@t
				@GetPFPosition(var_445_cvector);
				@WaitForAnimEnd();
				func_1963(var_445_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_442_bool = true;
				bool var_453_bool;
				func_1831(var_445_cvector, var_453_bool);
				var_454_bool = !var_453_bool; //@nz
				if(var_454_bool == 0) goto Label_1916;
		}
		for(;;) {
			var_442_bool = var_435_bool;

		}

	Label_1916:
	}
}
EMIT "Stack[-5] = 0";


void func_2908(int var_117_int, int var_118_int)
{
	if(var_117_int > var_118_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_130_int = 0;
	if(var_117_int != var_118_int) {
		@irand(var_130_int, (var_118_int - var_117_int));
	} else if(var_117_int == 0) {
		return 4;
	}
	var_130_int += var_117_int;
	if(var_130_int == 0)
		return 4;
	int var_138_int;
	func_3155(var_138_int, "Money");
	bool var_131_bool;
	@AddItem(var_131_bool, var_138_int, 0, var_130_int);
	
}


void func_2406(bool var_31_bool, object var_32_object)
{
	object var_36_object;
	var_32_object = var_36_object;
	bool var_35_bool;
	func_2370(var_35_bool, var_36_object);
	if(!var_35_bool) { //@nz
		var_31_bool = false;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	func_2280(var_53_bool, var_54_object, "noaccess");
	if(!var_53_bool) { //@nz
		var_31_bool = true;
		return 2;
	}
	int var_34_int;
	var_54_object->GetProperty("noaccess", var_34_int);
	var_31_bool = var_34_int == 0;
}


void func_2939(string var_231_string)
{
	object var_235_object;
	@CreateInvItem(var_235_object);
	var_235_object->SetItemName(var_231_string);
	var_235_object->SetProperty("Organ", 1);
	int var_236_int;
	var_235_object->GetItemID(var_236_int);
	bool var_237_bool;
	@AddItem(var_237_bool, var_235_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_381(string var_43_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_44_string;
	var_43_string = var_44_string;
	func_2688(var_44_string);
	@PlayAnimation("all", var_43_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_43_string);
	@RemoveEnvelope();
}


void func_2430(object var_35_object)
{
	string var_49_string;
	if(var_35_object == null)
		return 14;
	bool var_43_bool;
	@IsDead(var_43_bool);
	if(var_43_bool != 0)
		return 14;
	int var_44_int;
	@GetSecondaryAnimationType(var_44_int);
	if(var_44_int < 0)
		return 14;
	cvector var_45_cvector;
	var_35_object->GetPosition(var_45_cvector);
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	@GetDirection(var_47_cvector);
	cvector var_48_cvector = var_46_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_48_cvector, 0);
	var_55_float = GetByIndex(var_47_cvector, 0);
	var_57_float = GetByIndex(var_48_cvector, 2);
	var_58_float = GetByIndex(var_47_cvector, 2);
	if(((var_54_float * var_55_float) + (var_57_float * var_58_float)) >= 0)
		var_49_string = "fhit";
	else
		var_49_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_49_string + "1"), (var_49_string + "2"), -10);
	
}


void func_1920(object var_0_object, bool var_366_bool)
{
	bool var_368_bool;
	var_371_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_371_bool != 0) {
		var_0_object->IsAttacking(var_368_bool); //@t
		var_368_bool = var_366_bool;
	}
	var_366_bool = false;
}


// @pe
void func_3467(int var_85_int, object var_86_object)
{
	object var_89_object;
	var_86_object = var_89_object;
	int var_88_int;
	func_3374(var_88_int, var_89_object);
	var_88_int = var_85_int;
}


void func_1931(object var_2_object, bool var_5_bool)
{
	int var_482_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_481_float;
	@rand(var_481_float);
	float var_488_float;
	func_1981(var_488_float);
	if(var_481_float < var_488_float) {
		@irand(var_482_int, var_2_object);
		@Speak("attack" + (var_482_int + 1));
		int var_493_int;
		func_1979(var_493_int);
		var_5_bool = var_493_int;
	}
}


void func_2956(void)
{
	int var_225_int;
	func_2889(var_225_int);
	if(var_225_int != 1) {
	}
	func_2939("liver");
	func_2939("kidney");
	func_2939("heart");
	func_2939("blood");
}


// @pe
void func_3474(object var_124_object)
{
	object var_125_object;
	var_124_object = var_125_object;
	func_3384(var_125_object);
}


void func_3480(bool var_27_bool, object var_28_object, object var_29_object, float var_30_float, bool var_31_bool)
{
	object var_35_object;
	var_29_object = var_35_object;
	bool var_34_bool;
	func_3392(var_34_bool, var_35_object, !var_31_bool);
	if(!var_34_bool) { //@nz
		var_27_bool = false;
		return 2;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_28_object);
	bool var_73_bool = true;
	if(var_33_bool != 1) {
		float var_75_float; object var_76_object;
		var_28_object = var_76_object;
		func_2267(var_75_float, var_76_object);
		var_84_bool = var_75_float <= (var_30_float * var_30_float);
		if(var_84_bool != 1)
			var_73_bool = false;
	}
	if(var_73_bool != 0) {
		var_27_bool = true;
		return 2;
	}
	var_27_bool = false;
}


void func_2980(bool var_111_bool)
{
	int var_114_int; bool var_115_bool;
	if(var_111_bool != 0) {
		int var_120_int;
		func_2814(var_120_int);
		func_2908(0, (100 + (var_120_int * 100)));
		@irand(var_114_int, 8);
		if(var_114_int == 0) {
			int var_148_int;
			func_3155(var_148_int, "lemon");
			@AddItem(var_115_bool, var_148_int, 0, 1);
		} else {
				if(var_114_int == 1) {
					int var_154_int;
					func_3155(var_154_int, "rusk");
					@AddItem(var_115_bool, var_154_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_114_int == 2) {
				int var_160_int;
				func_3155(var_160_int, "hook");
				@AddItem(var_115_bool, var_160_int, 0, 1);
			} else if(var_114_int == 4) {
				int var_166_int;
				func_3155(var_166_int, "syringe");
				@AddItem(var_115_bool, var_166_int, 0, 1);
			} else if(var_114_int == 5) {
				int var_172_int;
				func_3155(var_172_int, "watch");
				@AddItem(var_115_bool, var_172_int, 0, 1);
			} else if(var_114_int == 6) {
				int var_178_int;
				func_3155(var_178_int, "razor");
				@AddItem(var_115_bool, var_178_int, 0, 1);
			}
	}
		int var_185_int;
		func_2814(var_185_int);
		func_2908(0, (50 + (var_185_int * 50)));
		@irand(var_114_int, 7);
		if(var_114_int == 0) {
			int var_191_int;
			func_3155(var_191_int, "beads");
			@AddItem(var_115_bool, var_191_int, 0, 1);
		} else if(var_114_int == 1) {
			int var_197_int;
			func_3155(var_197_int, "bracelet");
			@AddItem(var_115_bool, var_197_int, 0, 1);
		} else if(var_114_int == 2) {
			int var_203_int;
			func_3155(var_203_int, "ear_ring");
			@AddItem(var_115_bool, var_203_int, 0, 1);
		} else if(var_114_int == 3) {
			int var_209_int;
			func_3155(var_209_int, "gold_ring");
			@AddItem(var_115_bool, var_209_int, 0, 1);
		} else if(var_114_int == 4) {
			int var_215_int;
			func_3155(var_215_int, "silver_ring");
			@AddItem(var_115_bool, var_215_int, 0, 1);
		} else if(var_114_int == 5) {
			int var_221_int;
			func_3155(var_221_int, "flower");
			@AddItem(var_115_bool, var_221_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_2474(object var_22_object, int var_23_int, float var_24_float)
{
	cvector var_34_cvector; object var_35_object; int var_36_int; bool var_37_bool; cvector var_38_cvector; cvector var_39_cvector;
	bool var_43_bool = false;
	bool var_44_bool = false;
	if(var_22_object != 0) {
		if(var_23_int != 4)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		if(var_23_int != 5)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		cvector var_50_cvector; cvector var_51_cvector;
		cvector var_52_cvector; object var_53_object;
		var_22_object = var_53_object;
		func_2260(var_52_cvector, var_53_object);
		var_52_cvector = var_51_cvector;
		func_2735(var_50_cvector, var_51_cvector);
		var_50_cvector = var_34_cvector;
		@CreateVectorVector(var_35_object);
		var_36_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_36_int), var_37_bool, var_38_cvector, var_39_cvector);
			if(!var_37_bool) { //@nz
				break;
			Label_2536:
				var_35_object = null;
	}
			object var_112_object;
			var_22_object = var_112_object;
			func_2430(var_112_object);
		}
		if((var_39_cvector | var_34_cvector) >= 0.70710677)
			var_35_object->add(var_38_cvector);
		var_36_int += 1;
	}
	int var_40_int;
	var_35_object->size(var_40_int);
	if(var_40_int == 0) goto Label_2536;
	int var_41_int;
	@irand(var_41_int, var_40_int);
	cvector var_42_cvector;
	var_35_object->get(var_42_cvector, var_41_int);
	object var_67_object; int var_68_int; float var_69_float; cvector var_70_cvector; cvector var_71_cvector;
	var_22_object = var_67_object;
	var_23_int = var_68_int;
	var_24_float = var_69_float;
	var_42_cvector = var_70_cvector;
	var_71_cvector = -var_34_cvector;
	func_2542(var_69_float, var_70_cvector, var_71_cvector);
}


void func_1963(object var_0_object)
{
	func_2823(var_0_object);
}


void func_428(void)
{
	bool var_20_bool;
	func_2567(var_20_bool);
	if(!var_20_bool) //@nz
		func_3569();
}


void func_1968(int var_572_int)
{
	var_572_int = 0;
}


void func_946(void)
{
	int var_60_int; int var_61_int; bool var_62_bool; float var_63_float; bool var_64_bool;
	@WaitForAnimEnd();
	bool var_65_bool;
	func_2567(var_65_bool);
	if(!var_65_bool) //@nz
		return 14;
	int var_67_int;
	func_3340(var_67_int);
	int var_58_int;
	var_67_int = var_58_int;
	int var_59_int = 0;
	
	for(;;) {
		bool var_80_bool = false;
		if(var_59_int < 5) {
			bool var_83_bool;
			func_2567(var_83_bool);
			if(var_83_bool != 0)
				var_80_bool = true;
		}
		if(var_80_bool != 0) {
			@irand(var_60_int, 3);
			if(var_60_int == 0) {
				if(var_58_int == 0) goto Label_993;
				@irand(var_61_int, var_58_int);
				string var_89_string; int var_90_int;
				var_61_int = var_90_int;
				func_3333(var_89_string, var_90_int);
				@PlayAnimation("all", var_89_string);
				@WaitForAnimEnd(var_62_bool);
				if(!var_62_bool) { //@nz
				} else {
			} else {
			if(var_60_int == 1) {
				@rand(var_63_float, 4);
				@Sleep((var_63_float + 1), var_64_bool);
				if(!var_64_bool) { //@nz
					goto Label_1022;
				}
			} else if(var_59_int != 0) {
				goto Label_1022;
			}
			}
					bool var_92_bool;
					func_1025(var_92_bool);
					var_93_bool = !var_92_bool; //@nz
					if(var_93_bool == 0) goto Label_1017;
			}
		}
	Label_1022:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1017:
		@ResetAAS();
		var_59_int += 1;
	}
	
}


void func_1970(void)
{
	func_2688("attack_stay");
}


// @pe
void func_3509(int var_21_int)
{
	var_21_int = 0;
}


// @pe
void func_1975(void)
{
}


// @pe
void func_3512(void)
{
}


void func_1977(bool var_597_bool)
{
	var_597_bool = true;
}


// @pe
void func_3514(int var_128_int, string var_129_string, object var_130_object)
{
	if(var_129_string == "killme") {
		int var_133_int; object var_134_object;
		var_130_object = var_134_object;
		func_3536(var_133_int, var_134_object);
		var_133_int = var_128_int;
		return 0;
	}
	var_128_int = 0;
}


void func_1979(int var_493_int)
{
	var_493_int = 1;
}


void func_1981(float var_488_float)
{
	var_488_float = 0.5;
}


// @pe
void func_3526(string var_176_string, object var_177_object)
{
	if(var_176_string == "killme") {
		object var_180_object;
		var_177_object = var_180_object;
		func_3554(var_180_object);
	}
}


void func_1990(object var_2_object, bool var_260_bool, object var_261_object, float var_262_float, float var_263_float, bool var_264_bool, bool var_265_bool)
{
	object var_273_object;
	func_2823(var_273_object);
	@SetTimer(1, 5);
	bool var_271_bool;
	@CanSee(var_271_bool, var_273_object);
	if(var_271_bool != 0) {
		var_2_object = true;
		object var_277_object;
		var_261_object = var_277_object;
		func_2670(var_277_object);
	} else {
		var_2_object = false;
	}
	bool var_278_bool; object var_279_object;
	func_2275(var_278_bool, var_279_object);
	if(var_278_bool != 0) {
		object var_282_object;
		func_2729(var_282_object);
		@SendPlayerEnemy(var_279_object, var_282_object);
	}
	bool var_283_bool; object var_284_object; float var_285_float; float var_286_float; bool var_287_bool; bool var_288_bool;
	var_261_object = var_284_object;
	var_262_float = var_285_float;
	var_263_float = var_286_float;
	var_264_bool = var_287_bool;
	var_265_bool = var_288_bool;
	bool var_272_bool;
	func_2095(var_271_bool, var_272_bool, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool);
	var_283_bool = var_272_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_272_bool = var_260_bool;
	
}


// @pe
void func_3536(int var_133_int, object var_134_object)
{
	object var_136_object;
	var_134_object = var_136_object;
	bool var_135_bool;
	func_2406(var_135_bool, var_136_object);
	if(!var_135_bool) { //@nz
		var_133_int = 0;
		return 0;
	}
	bool var_170_bool; object var_171_object;
	var_134_object = var_171_object;
	func_3642(var_171_object);
	if(var_170_bool != 0)
		var_133_int = 2;
	else
		var_133_int = 0;
	
}


// @pe
void func_3554(object var_180_object)
{
	object var_181_object;
	var_180_object = var_181_object;
	func_3384(var_181_object);
}


// @pe
void func_3560(int var_21_int)
{
	var_21_int = 2;
}


// @pe
void func_3563(object var_29_object)
{
	object var_30_object;
	var_29_object = var_30_object;
	func_3620(var_30_object);
}


void func_2542(object var_24_object, cvector var_27_cvector, cvector var_28_cvector)
{
	object var_31_object;
	@GetScene(var_31_object);
	object var_32_object;
	@AddActorByType(var_32_object, "scripted", var_31_object, var_27_cvector, var_28_cvector, "blood_dir.xml");
	object var_35_object;
	var_24_object = var_35_object;
	func_2430(var_35_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3569(void)
{
}


// @pe
void func_3570(bool var_24_bool)
{
	var_24_bool = false;
}


// @pe
void func_3573(void)
{
}


void func_3575(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	@CanSee(var_34_bool, var_32_object);
	var_31_bool = true;
	if(var_34_bool != 1) {
		float var_36_float; object var_37_object;
		var_32_object = var_37_object;
		func_2267(var_36_float, var_37_object);
		var_45_bool = var_36_float <= 2250000;
		if(var_45_bool != 1)
			var_31_bool = false;
	}
}


void func_2556(object var_94_object)
{
	cvector var_98_cvector;
	var_94_object->GetPosition(var_98_cvector);
	cvector var_99_cvector;
	@GetPosition(var_99_cvector);
	cvector var_100_cvector = var_98_cvector - var_99_cvector;
	var_101_float = GetByIndex(var_100_cvector, 0);
	var_102_float = GetByIndex(var_100_cvector, 2);
	@RotateAsync(var_101_float, var_102_float);
}


