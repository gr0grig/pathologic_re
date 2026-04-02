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
			func_2915();
			if(var_18_object == 34223) {
				bool var_24_bool;
				func_3121(var_1_object);
				if(var_24_bool != 0) {
					object var_32_object; object var_33_object;
					var_32_object = var_1_object;
					var_33_object = var_0_object;
					func_3115();
					func_162(var_19_bool, "Neutral");
					var_0_object->SetMessage(532749); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533297, 34809, 34808); //@t
					var_0_object->AddReply(533299, 34811, 34810); //@t
					return 0;
				}
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532754, -1, 34228); //@t
				var_0_object->AddReply(532977, -1, 34475); //@t
				return 0;
			}
			if(var_18_object == 34811) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(533300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533301, 34809, 34812); //@t
				return 0;
			}
			if(var_18_object == 34809) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(533298); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532975, 34474, 34473); //@t
				var_0_object->AddReply(532978, 34477, 34476); //@t
				return 0;
			}
			if(var_18_object == 34477) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532979); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532980, 34480, 34478); //@t
				var_0_object->AddReply(532981, -1, 34479); //@t
				return 0;
			}
			if(var_18_object == 34480) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532983, -1, 34481); //@t
				var_0_object->AddReply(532984, -1, 34482); //@t
				return 0;
			}
			if(var_18_object == 34474) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532976); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532750, 34225, 34224); //@t
				var_0_object->AddReply(532985, 34484, 34483); //@t
				return 0;
			}
			if(var_18_object == 34484) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532986); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532987, 34225, 34485); //@t
				var_0_object->AddReply(532988, -1, 34486); //@t
				return 0;
			}
			if(var_18_object == 34225) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532752, 34471, 34226); //@t
				return 0;
			}
			if(var_18_object == 34471) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532974, 34488, 34472); //@t
				var_0_object->AddReply(532991, 34491, 34490); //@t
				return 0;
			}
			if(var_18_object == 34491) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532992); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532993, 34488, 34492); //@t
				return 0;
			}
			if(var_18_object == 34488) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532989); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532990, -1, 34489); //@t
				var_0_object->AddReply(532994, -1, 34494); //@t
				return 0;
			}
			var_3_string = true;
			bool var_159_bool;
			func_3683(var_159_bool);
			if(var_159_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


task task_2
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3619(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			object var_25_object;
			var_18_bool = var_25_object;
			func_3622(var_25_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_3628();
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
		func_3685();
		func_642();
	
		for(;;) {
			var_2_object = false;
			func_903(var_16_object, var_17_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3619(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_838(var_20_int);
			object var_28_object;
			var_18_bool = var_28_object;
			func_3622(var_28_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_3505(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_3588(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_838(var_20_int);
			object var_71_object;
			var_18_bool = var_71_object;
			func_3598(var_71_object);
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
		func_3713(var_26_bool);
		bool var_23_bool;
		if(var_23_bool != 0) {
			int var_27_int; object var_28_object; bool var_29_bool;
			var_18_bool = var_28_object;
			var_20_bool = var_29_bool;
			func_3606(var_28_object, var_29_bool);
			var_27_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_838(var_22_int);
				object var_71_object;
				var_18_bool = var_71_object;
				func_3613(var_71_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3665(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_838(var_20_int);
			object var_28_object;
			var_18_bool = var_28_object;
			func_3668();
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
		func_3419(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_838(var_21_int);
			object var_51_object; string var_52_string;
			var_18_object = var_51_object;
			var_19_bool = var_52_string;
			func_3451(var_51_object, var_52_string);
		} else {
			int var_127_int; string var_128_string; object var_129_object;
			var_19_bool = var_128_string;
			var_18_object = var_129_object;
			func_3629(var_129_object);
			var_127_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_779;
			if(var_21_int > 1)
				func_838(var_21_int);
			string var_134_string; object var_135_object;
			var_19_bool = var_134_string;
			var_18_object = var_135_object;
			func_3632();
		}
	Label_779:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, string var_8_string, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		bool var_19_bool; string var_20_string;
		func_3518(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_838(var_20_string);
			string var_29_string;
			var_18_bool = var_29_string;
			func_3534(var_29_string);
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		bool var_19_bool; object var_20_object;
		func_3476(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_838(var_20_object);
			object var_32_object;
			var_18_bool = var_32_object;
			func_3499(var_32_object);
		} else {
			object var_34_object;
			func_863(var_34_object, var_34_object);
		}
	
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_19_object;
		func_863(var_19_object, var_19_object);
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
		func_838(var_17_bool);
		func_3628();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_838(var_18_bool);
		object var_20_object;
		var_18_bool = var_20_object;
		func_3395();
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
		func_3619(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1241();
			object var_27_object;
			var_18_bool = var_27_object;
			func_3622(var_27_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_3505(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_3588(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1241();
			object var_70_object;
			var_18_bool = var_70_object;
			func_3598(var_70_object);
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
		func_3713(var_26_bool);
		bool var_23_bool;
		if(var_23_bool != 0) {
			int var_27_int; object var_28_object; bool var_29_bool;
			var_18_bool = var_28_object;
			var_20_bool = var_29_bool;
			func_3606(var_28_object, var_29_bool);
			var_27_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_1241();
				object var_70_object;
				var_18_bool = var_70_object;
				func_3613(var_70_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3665(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1241();
			object var_27_object;
			var_18_bool = var_27_object;
			func_3668();
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
		func_3419(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_1241();
			object var_50_object; string var_51_string;
			var_18_object = var_50_object;
			var_19_bool = var_51_string;
			func_3451(var_50_object, var_51_string);
		} else {
			int var_126_int; string var_127_string; object var_128_object;
			var_19_bool = var_127_string;
			var_18_object = var_128_object;
			func_3629(var_128_object);
			var_126_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_1124;
			if(var_21_int > 1)
				func_1241();
			string var_133_string; object var_134_object;
			var_19_bool = var_133_string;
			var_18_object = var_134_object;
			func_3632();
		}
	Label_1124:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, string var_8_string, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		string var_20_string;
		var_18_bool = var_20_string;
		bool var_19_bool;
		func_3518(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_1241();
			string var_28_string;
			var_18_bool = var_28_string;
			func_3534(var_28_string);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_1241();
		func_3628();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_18_bool = var_20_object;
		bool var_19_bool;
		func_3476(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_1241();
			object var_31_object;
			var_18_bool = var_31_object;
			func_3499(var_31_object);
		}
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3619(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1445();
			object var_29_object;
			var_18_bool = var_29_object;
			func_3622(var_29_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_3505(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_3588(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1445();
			object var_72_object;
			var_18_bool = var_72_object;
			func_3598(var_72_object);
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
		func_3713(var_26_bool);
		bool var_23_bool;
		if(var_23_bool != 0) {
			int var_27_int; object var_28_object; bool var_29_bool;
			var_18_bool = var_28_object;
			var_20_bool = var_29_bool;
			func_3606(var_28_object, var_29_bool);
			var_27_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_1445();
				object var_72_object;
				var_18_bool = var_72_object;
				func_3613(var_72_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3665(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1445();
			object var_29_object;
			var_18_bool = var_29_object;
			func_3668();
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
		func_3419(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_1445();
			object var_52_object; string var_53_string;
			var_18_object = var_52_object;
			var_19_bool = var_53_string;
			func_3451(var_52_object, var_53_string);
		} else {
			int var_128_int; string var_129_string; object var_130_object;
			var_19_bool = var_129_string;
			var_18_object = var_130_object;
			func_3629(var_130_object);
			var_128_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_1430;
			if(var_21_int > 1)
				func_1445();
			string var_135_string; object var_136_object;
			var_19_bool = var_135_string;
			var_18_object = var_136_object;
			func_3632();
		}
	Label_1430:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, string var_9_string, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		string var_20_string;
		var_18_bool = var_20_string;
		bool var_19_bool;
		func_3518(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_1445();
			string var_30_string;
			var_18_bool = var_30_string;
			func_3534(var_30_string);
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_1445();
		object var_21_object;
		var_18_bool = var_21_object;
		func_3395();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		if(var_18_bool != 111)
			return 4;
		bool var_25_bool;
		func_2620(var_25_bool, var_0_object);
		if(!var_25_bool) { //@nz
			func_1445();
			return 4;
		}
		cvector var_21_cvector;
		@GetDirection(var_21_cvector);
		cvector var_62_cvector;
		func_2474(var_62_cvector, var_0_object);
		cvector var_22_cvector;
		var_62_cvector = var_22_cvector;
		float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
		var_21_cvector = var_69_cvector;
		var_22_cvector = var_70_cvector;
		func_3047(var_68_float, var_69_cvector, var_70_cvector);
		if(var_68_float < 0.49999997)
			func_2770(var_0_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_1445();
		func_3628();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_18_bool = var_20_object;
		bool var_19_bool;
		func_3476(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_1445();
			object var_33_object;
			var_18_bool = var_33_object;
			func_3499(var_33_object);
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
		func_2267(var_17_bool);
		func_3628();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, int var_18_int)
	{
		if(var_18_int == 1) {
			func_3095(var_1_object);
		} else {
			int var_26_int;
			func_2411(var_17_bool, var_26_int, var_26_int);
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
			func_2904(var_22_object);
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
		func_2267(var_18_object);
		object var_23_object;
		var_18_object = var_23_object;
		func_3395();
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
	func_3374(var_19_object);
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
	func_2688(var_22_object, var_23_int, var_24_float);
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
	func_2756(var_26_float, var_27_cvector, var_28_cvector);
}


void func_0(object var_0_object, int var_43_int, object var_44_object)
{
	var_0_object = var_44_object;
	bool var_54_bool; object var_55_object;
	var_44_object = var_55_object;
	func_2786(var_54_bool, var_55_object, 70.0);
	if(!var_54_bool) { //@nz
		var_43_int = -2;
		return 8;
	}
	object var_50_object;
	@CreateDialog(var_50_object);
	int var_102_int;
	func_3677(var_102_int);
	var_50_object->SetNPCName(var_102_int);
	int var_103_int;
	func_3675(var_103_int);
	var_50_object->SetNPCDescription(var_103_int);
	string var_104_string;
	func_3679(var_104_string);
	var_50_object->SetPhoto(var_104_string);
	string var_105_string;
	func_3681(var_105_string);
	var_50_object->SetPhoto2(var_105_string);
	int var_106_int;
	func_3133(var_106_int);
	var_50_object->SetPlayerName(var_106_int);
	bool var_51_bool;
	@IsOverrideActive(var_51_bool);
	if(var_51_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	@DoDialog(var_50_object);
	object var_115_object; object var_116_object;
	var_44_object = var_115_object;
	var_50_object = var_116_object;
	TaskCall(1);
	func_74(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object);
	TaskReturn();
	bool var_53_bool;
	var_50_object->IsDialogEnd(var_53_bool);
	
	for(;;) {
		var_184_bool = !var_53_bool; //@nz
		if(var_184_bool == 0) goto Label_63;
		@sync();
		var_50_object->IsDialogEnd(var_53_bool);
	}
	
Label_63:
	object var_185_object;
	var_44_object = var_185_object;
	func_2855();
	@StopDialog(var_50_object);
	var_50_object->GetReturnValue(-1);
	int var_52_int = var_43_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3588(int var_30_int, object var_31_object)
{
	object var_33_object;
	var_31_object = var_33_object;
	bool var_32_bool;
	func_2620(var_32_bool, var_33_object);
	if(var_32_bool != 0)
		var_30_int = 2;
	else
		var_30_int = 0;
	
}


// @pe
void func_3598(object var_73_object)
{
	object var_74_object;
	var_73_object = var_74_object;
	TaskCall(6);
	func_1521(var_74_object);
	TaskReturn();
}


void func_3086(int var_28_int)
{
	float var_30_float;
	@GetGameTime(var_30_float);
	var_28_int = 1 + (var_30_float / 24);
}


void func_2579(bool var_46_bool, object var_47_object)
{
	bool var_49_bool;
	var_47_object->IsDead(var_49_bool);
	var_49_bool = var_46_bool;
}


// @pe
void func_3606(int var_27_int, object var_28_object)
{
	object var_31_object;
	var_28_object = var_31_object;
	int var_30_int;
	func_3588(var_30_int, var_31_object);
	var_30_int = var_27_int;
}


void func_3095(object var_21_object)
{
	bool var_23_bool;
	@IsPlayerActor(var_21_object, var_23_bool);
	if(var_23_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2584(bool var_35_bool, object var_36_object)
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
		func_2579(var_46_bool, var_47_object);
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


void func_2073(bool var_322_bool)
{
	bool var_323_bool = false;
	bool var_324_bool;
	func_2045(var_323_bool, var_324_bool);
	if(var_324_bool != 0) {
		bool var_341_bool;
		func_2089(var_322_bool, var_323_bool, var_341_bool);
		if(var_341_bool != 0)
			var_323_bool = true;
	}
	if(var_323_bool != 0) {
		var_322_bool = true;
		return 0;
	}
	var_322_bool = false;
}


// @pe
void func_3613(object var_72_object)
{
	object var_73_object;
	var_72_object = var_73_object;
	func_3598(var_73_object);
}


void func_3104(void)
{
	object var_383_object;
	@GetScene(var_383_object);
	object var_385_object;
	func_2989(var_385_object);
	@BroadcastMessage("battle", var_385_object, var_383_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3619(int var_21_int)
{
	var_21_int = 2;
}


// @pe
void func_3622(object var_29_object)
{
	object var_30_object;
	var_29_object = var_30_object;
	func_3693(var_30_object);
}


void func_2089(object var_0_object, bool var_4_bool, bool var_341_bool)
{
	object var_347_object; float var_349_float; cvector var_350_cvector; cvector var_351_cvector;
	@GetScene(var_347_object);
	bool var_348_bool = false;
	
	for(;;) {
		cvector var_352_cvector;
		func_2474(var_352_cvector, var_0_object);
		var_358_int = -var_352_cvector;
		@FindDirLength(var_349_float, var_358_int, var_4_bool);
		if(var_349_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_350_cvector); //@t
				@GetPFPosition(var_351_cvector);
				@WaitForAnimEnd();
				func_2177(var_351_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_348_bool = true;
				bool var_363_bool;
				func_2045(var_351_cvector, var_363_bool);
				var_364_bool = !var_363_bool; //@nz
				if(var_364_bool == 0) goto Label_2130;
		}
		for(;;) {
			var_348_bool = var_341_bool;

		}

	Label_2130:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_3115(void)
{
	@SetVariable("ood1Doberman2_1", 1);
}


void func_3628(void)
{
}


// @pe
void func_3629(int var_128_int)
{
	var_128_int = 0;
}


// @pe
void func_3632(void)
{
}


// @pe
void func_3121(bool var_122_bool)
{
	int var_124_int;
	func_3064(var_124_int, "ood1Doberman2_1");
	if(var_124_int == 0) {
		var_122_bool = true;
		return 0;
	}
	var_122_bool = false;
}


// @pe
void func_3634(bool var_24_bool)
{
	var_24_bool = false;
}


// @pe
void func_3637(void)
{
}


void func_3639(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	@CanSee(var_34_bool, var_32_object);
	var_31_bool = true;
	if(var_34_bool != 1) {
		float var_36_float; object var_37_object;
		var_32_object = var_37_object;
		func_2481(var_36_float, var_37_object);
		var_45_bool = var_36_float <= 2250000;
		if(var_45_bool != 1)
			var_31_bool = false;
	}
}


void func_3064(int var_124_int, string var_125_string)
{
	int var_127_int;
	@GetVariable(var_125_string, var_127_int);
	var_127_int = var_124_int;
}


void func_2620(bool var_31_bool, object var_32_object)
{
	object var_36_object;
	var_32_object = var_36_object;
	bool var_35_bool;
	func_2584(var_35_bool, var_36_object);
	if(!var_35_bool) { //@nz
		var_31_bool = false;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	func_2494(var_53_bool, var_54_object, "noaccess");
	if(!var_53_bool) { //@nz
		var_31_bool = true;
		return 2;
	}
	int var_34_int;
	var_54_object->GetProperty("noaccess", var_34_int);
	var_31_bool = var_34_int == 0;
}


void func_3133(int var_106_int)
{
	int var_108_int;
	@GetVariable("branch", var_108_int);
	if(var_108_int == 0) {
		var_106_int = 1;
		return 2;
	EMIT "GOTO 0xc4c";
	}
	if(var_108_int == 1) {
		var_106_int = 2;
		return 2;
	}
	var_106_int = 3;
}


// @pe
void func_3654(object var_59_object)
{
	object var_60_object;
	var_59_object = var_60_object;
	func_3580(var_60_object);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_115_object, object var_116_object)
{
	var_0_object = var_116_object;
	var_1_object = var_115_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_122_bool;
		func_3121(var_1_object);
		if(var_122_bool != 0) {
			object var_130_object; object var_131_object;
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_3115();
			func_162(var_116_object, "Neutral");
			var_0_object->SetMessage(532749); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(533297, 34809, 34808); //@t
			var_0_object->AddReply(533299, 34811, 34810); //@t
		} else {
					func_162(var_116_object, "Neutral");
					var_0_object->SetMessage(532753); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(532754, -1, 34228); //@t
					var_0_object->AddReply(532977, -1, 34475); //@t
		}
	}
	for(;;) {
		bool var_158_bool;
		func_3683(var_158_bool);
		if(var_158_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2873(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_161;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_161:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_3660(bool var_48_bool)
{
	var_48_bool = false;
}


void func_3150(int var_157_int)
{
	int var_159_int;
	@GetVariable("branch", var_159_int);
	var_159_int = var_157_int;
}


// @pe
void func_3663(void)
{
}


// @pe
void func_3665(int var_21_int)
{
	var_21_int = 0;
}


void func_3069(float var_477_float)
{
	object var_479_object;
	@CreateFloatVector(var_479_object);
	var_479_object->add(var_477_float);
	if(var_477_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_479_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_595(string var_43_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_44_string;
	var_43_string = var_44_string;
	func_2948(var_44_string);
	@PlayAnimation("all", var_43_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_43_string);
	@RemoveEnvelope();
}


// @pe
void func_3668(void)
{
}


void func_2644(object var_35_object)
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


void func_2134(object var_0_object, bool var_272_bool)
{
	bool var_274_bool;
	var_277_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_277_bool != 0) {
		var_0_object->IsAttacking(var_274_bool); //@t
		var_274_bool = var_272_bool;
	}
	var_272_bool = false;
}


// @pe
void func_3670(bool var_26_bool)
{
	var_26_bool = false;
}


// @pe
void func_3156(object var_35_object)
{
	int var_36_int;
	func_3150(var_36_int);
	if(var_36_int == 1)
		@WorkWithCorpse(var_35_object);
	else
		@Barter(var_35_object);
	
}


// @pe
void func_3673(void)
{
}


void func_3675(int var_103_int)
{
	var_103_int = 518097;
}


// @pe
void func_3580(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	TaskCall(5);
	func_1246(var_62_object, var_61_object);
	TaskReturn();
}


void func_3677(int var_102_int)
{
	var_102_int = 518096;
}


void func_3679(string var_104_string)
{
	var_104_string = "ui/NPC_Citizen2.png";
}


void func_3681(string var_105_string)
{
	var_105_string = "ui/NPC_Citizen2_b.png";
}


void func_2145(object var_2_object, bool var_5_bool)
{
	int var_392_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_391_float;
	@rand(var_391_float);
	float var_398_float;
	func_2195(var_398_float);
	if(var_391_float < var_398_float) {
		@irand(var_392_int, var_2_object);
		@Speak("attack" + (var_392_int + 1));
		int var_403_int;
		func_2193(var_403_int);
		var_5_bool = var_403_int;
	}
}


void func_3683(bool var_97_bool)
{
	var_97_bool = false;
}


void func_3169(int var_115_int, int var_116_int)
{
	if(var_115_int > var_116_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_128_int = 0;
	if(var_115_int != var_116_int) {
		@irand(var_128_int, (var_116_int - var_115_int));
	} else if(var_115_int == 0) {
		return 4;
	}
	var_128_int += var_115_int;
	if(var_128_int == 0)
		return 4;
	int var_136_int;
	func_3369(var_136_int, "Money");
	bool var_129_bool;
	@AddItem(var_129_bool, var_136_int, 0, var_128_int);
	
}


void func_3685(void)
{
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_3269(true);
}


void func_3693(object var_30_object)
{
	bool var_32_bool;
	var_33_bool = GlobalVars[0];
	if(var_33_bool != 0) {
		@IsOverrideActive(var_32_bool);
		if(!var_32_bool) { //@nz
			object var_35_object;
			var_30_object = var_35_object;
			func_3156(var_35_object);
		}
	EMIT "GOTO 0xe7e";
	}
	object var_42_object;
	var_30_object = var_42_object;
	func_3744(var_42_object);
}


void func_3711(bool var_63_bool)
{
	var_63_bool = false;
}


void func_3200(string var_163_string)
{
	object var_167_object;
	@CreateInvItem(var_167_object);
	var_167_object->SetItemName(var_163_string);
	var_167_object->SetProperty("Organ", 1);
	int var_168_int;
	var_167_object->GetItemID(var_168_int);
	bool var_169_bool;
	@AddItem(var_169_bool, var_167_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_3713(bool var_23_bool)
{
	var_23_bool = true;
}


void func_642(void)
{
	bool var_101_bool;
	func_2781(var_101_bool);
	if(!var_101_bool) //@nz
		func_3628();
}


void func_2177(object var_0_object)
{
	func_3095(var_0_object);
}


// @pe
void func_3716(object var_101_object)
{
	bool var_102_bool; object var_103_object;
	func_2489(var_102_bool, var_103_object);
	if(var_102_bool != 0) {
		object var_106_object;
		func_2989(var_106_object);
		@ReportReputationChange(var_103_object, var_106_object, -0.1, true);
		bool var_111_bool = true;
		func_3241();
	}
	func_3217();
	var_177_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_2688(object var_22_object, int var_23_int, float var_24_float)
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
		func_2474(var_52_cvector, var_53_object);
		var_52_cvector = var_51_cvector;
		func_2995(var_50_cvector, var_51_cvector);
		var_50_cvector = var_34_cvector;
		@CreateVectorVector(var_35_object);
		var_36_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_36_int), var_37_bool, var_38_cvector, var_39_cvector);
			if(!var_37_bool) { //@nz
				break;
			Label_2750:
				var_35_object = null;
	}
			object var_112_object;
			var_22_object = var_112_object;
			func_2644(var_112_object);
		}
		if((var_39_cvector | var_34_cvector) >= 0.70710677)
			var_35_object->add(var_38_cvector);
		var_36_int += 1;
	}
	int var_40_int;
	var_35_object->size(var_40_int);
	if(var_40_int == 0) goto Label_2750;
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
	func_2756(var_69_float, var_70_cvector, var_71_cvector);
}


void func_2182(int var_486_int)
{
	var_486_int = 0;
}


void func_1160(void)
{
	int var_141_int; int var_142_int; bool var_143_bool; float var_144_float; bool var_145_bool;
	@WaitForAnimEnd();
	bool var_146_bool;
	func_2781(var_146_bool);
	if(!var_146_bool) //@nz
		return 14;
	int var_148_int;
	func_3554(var_148_int);
	int var_139_int;
	var_148_int = var_139_int;
	int var_140_int = 0;
	
	for(;;) {
		bool var_161_bool = false;
		if(var_140_int < 5) {
			bool var_164_bool;
			func_2781(var_164_bool);
			if(var_164_bool != 0)
				var_161_bool = true;
		}
		if(var_161_bool != 0) {
			@irand(var_141_int, 3);
			if(var_141_int == 0) {
				if(var_139_int == 0) goto Label_1207;
				@irand(var_142_int, var_139_int);
				string var_170_string; int var_171_int;
				var_142_int = var_171_int;
				func_3547(var_170_string, var_171_int);
				@PlayAnimation("all", var_170_string);
				@WaitForAnimEnd(var_143_bool);
				if(!var_143_bool) { //@nz
				} else {
			} else {
			if(var_141_int == 1) {
				@rand(var_144_float, 4);
				@Sleep((var_144_float + 1), var_145_bool);
				if(!var_145_bool) { //@nz
					goto Label_1236;
				}
			} else if(var_140_int != 0) {
				goto Label_1236;
			}
			}
					bool var_173_bool;
					func_1239(var_173_bool);
					var_174_bool = !var_173_bool; //@nz
					if(var_174_bool == 0) goto Label_1231;
			}
		}
	Label_1236:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1231:
		@ResetAAS();
		var_140_int += 1;
	}
	
}


void func_2184(void)
{
	func_2948("attack_stay");
}


// @pe
void func_2189(void)
{
}


void func_2191(bool var_511_bool)
{
	var_511_bool = true;
}


void func_2193(int var_403_int)
{
	var_403_int = 1;
}


void func_3217(void)
{
	int var_157_int;
	func_3150(var_157_int);
	if(var_157_int != 1) {
	}
	func_3200("liver");
	func_3200("kidney");
	func_3200("heart");
	func_3200("blood");
}


void func_2195(float var_398_float)
{
	var_398_float = 0.5;
}


void func_2204(object var_2_object, bool var_152_bool, object var_153_object, float var_154_float, float var_155_float, bool var_156_bool, bool var_157_bool)
{
	object var_165_object;
	func_3095(var_165_object);
	@SetTimer(1, 5);
	bool var_163_bool;
	@CanSee(var_163_bool, var_165_object);
	if(var_163_bool != 0) {
		var_2_object = true;
		object var_169_object;
		var_153_object = var_169_object;
		func_2904(var_169_object);
	} else {
		var_2_object = false;
	}
	bool var_176_bool; object var_177_object;
	func_2489(var_176_bool, var_177_object);
	if(var_176_bool != 0) {
		object var_180_object;
		func_2989(var_180_object);
		@SendPlayerEnemy(var_177_object, var_180_object);
	}
	bool var_181_bool; object var_182_object; float var_183_float; float var_184_float; bool var_185_bool; bool var_186_bool;
	var_153_object = var_182_object;
	var_154_float = var_183_float;
	var_155_float = var_184_float;
	var_156_bool = var_185_bool;
	var_157_bool = var_186_bool;
	bool var_164_bool;
	func_2309(var_163_bool, var_164_bool, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool);
	var_181_bool = var_164_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_164_bool = var_152_bool;
	
}


// @pe
void func_3744(object var_42_object)
{
	object var_44_object;
	var_42_object = var_44_object;
	TaskCall(0);
	int var_43_int;
	func_0(var_45_object, var_43_int, var_44_object);
	TaskReturn();
}


// @pe
void func_162(object var_2_object, string var_134_string)
{
	bool var_135_bool;
	func_3683(var_135_bool);
	if(!var_135_bool) //@nz
		return 0;
	if(var_134_string == var_2_object)
		return 0;
	string var_138_string; bool var_139_bool;
	var_134_string = var_138_string;
	if(var_134_string == "")
		var_139_bool = false;
	else
		var_139_bool = true;
	func_2889(var_138_string, var_139_bool);
	var_2_object = var_134_string;
	
}


void func_3241(void)
{
	@ClearSubContainer(0);
	int var_118_int;
	func_3086(var_118_int);
	func_3169(0, (10 + (var_118_int * 10)));
	func_2922("hook", 1, 4);
	func_2922("watch", 1, 10);
}


void func_2756(object var_24_object, cvector var_27_cvector, cvector var_28_cvector)
{
	object var_31_object;
	@GetScene(var_31_object);
	object var_32_object;
	@AddActorByType(var_32_object, "scripted", var_31_object, var_27_cvector, var_28_cvector, "blood_dir.xml");
	object var_35_object;
	var_24_object = var_35_object;
	func_2644(var_35_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3269(bool var_20_bool)
{
	@ClearSubContainer(0);
	int var_28_int;
	func_3086(var_28_int);
	int var_26_int;
	var_28_int = var_26_int;
	if(var_20_bool != 0) {
		func_2933("alpha_pills", 1, 2, 4);
		func_2933("meradorm", 2, 3, 3);
		if(var_26_int >= 3)
			func_2922("beta_pills", 1, 4);
		if(var_26_int >= 8) {
			func_2933("monomicin", 1, 2, 2);
		} else {
				if(var_26_int >= 4)
					func_2922("monomicin", 1, 2);
				func_2922("lockpick", 1, 4);
				func_2922("rifle_ammo", 1, 2);
				func_2922("revolver_ammo", 1, 2);
				func_2933("samopal_ammo", 1, 2, 2);
				if(var_26_int >= 8)
					func_2933("monomicin", 1, 2, 2);
			}
			} else if(var_26_int >= 4) {
		func_2922("monomicin", 1, 2);
			}
	
}


void func_2770(object var_94_object)
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


void func_1239(bool var_173_bool)
{
	var_173_bool = true;
}


void func_1241(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2267(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_2433(var_18_object);
}


void func_2781(bool var_101_bool)
{
	bool var_103_bool;
	@IsLoaded(var_103_bool);
	var_103_bool = var_101_bool;
}


void func_1246(object var_0_object, object var_61_object)
{
	var_0_object = var_61_object;
	bool var_68_bool;
	func_1297(var_68_bool);
	cvector var_66_cvector;
	@GetDirection(var_66_cvector);
	cvector var_76_cvector;
	func_2474(var_76_cvector, var_0_object);
	cvector var_67_cvector;
	var_76_cvector = var_67_cvector;
	float var_82_float; cvector var_83_cvector; cvector var_84_cvector;
	var_66_cvector = var_83_cvector;
	var_67_cvector = var_84_cvector;
	func_3047(var_82_float, var_83_cvector, var_84_cvector);
	if(var_82_float < 0) {
		func_2770(var_0_object);
		var_68_bool = true;
	} else {
		@Sleep(1.5, var_68_bool);
	}
	if(var_68_bool != 0) {
		func_2770(var_0_object);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2786(bool var_54_bool, object var_55_object, float var_56_float)
{
	cvector var_67_cvector; bool var_74_bool;
	var_55_object->GetPosition(var_67_cvector);
	float var_66_float;
	var_55_object->GetEyesHeight(var_66_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (var_75_float + var_66_float);
	cvector var_68_cvector;
	@GetPosition(var_68_cvector);
	@GetEyesHeight(var_66_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (var_76_float + var_66_float);
	cvector var_69_cvector = var_67_cvector - var_68_cvector;
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (float)0;
	var_79_float = sqrt(var_69_cvector | var_69_cvector);
	var_69_cvector /= var_79_float;
	cvector var_70_cvector = -var_69_cvector;
	cvector var_81_cvector;
	func_2995(var_81_cvector, (var_70_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_71_cvector = ((var_69_cvector * var_56_float) + (var_81_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_73_bool;
	@IsOverrideActive(var_73_bool);
	if(var_73_bool != 0)
		var_54_bool = false;
	@StopWorld();
	@CameraTransit((var_68_cvector + var_71_cvector), var_70_cvector, true);
	var_95_float = GetByIndex(var_71_cvector, 0);
	var_96_float = GetByIndex(var_71_cvector, 2);
	@Rotate(var_95_float, var_96_float);
	bool var_97_bool;
	func_3683(var_97_bool);
	if(var_97_bool != 0) {
	} else {
		@HasAnimationTrack(var_74_bool, "head");
		if(var_74_bool == 0) goto Label_2849;
		@LookAsyncCamera("head");
	}
Label_2849:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_54_bool = true;
	
}


void func_1764(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_109_bool; bool var_110_bool; cvector var_111_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_109_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_109_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_110_bool, ("attack" + (var_2_object + 1)));
			if(!var_110_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_111_cvector, "all", "bjump");
		var_125_float = GetByIndex(var_111_cvector, 2);
		var_4_bool = -var_125_float;

	}
}


void func_2309(object var_0_object, object var_1_object, bool var_181_bool, object var_182_object, float var_183_float, float var_184_float, bool var_185_bool, bool var_186_bool)
{
	bool var_195_bool; object var_197_object; cvector var_198_cvector; cvector var_199_cvector; float var_201_float; object var_202_object;
	var_0_object = false;
	var_1_object = var_182_object;
	bool var_196_bool;
	var_186_bool = var_196_bool;
	
	for(;;) {
		bool var_203_bool; object var_204_object;
		var_182_object = var_204_object;
		func_2449(var_203_bool, var_204_object);
		if(!var_203_bool) { //@nz
			var_181_bool = false;
			return 16;
		}
		var_182_object->GetPosition(var_198_cvector);
		@GetPosition(var_199_cvector);
		var_201_float = (var_198_cvector - var_199_cvector) | (var_198_cvector - var_199_cvector);
		bool var_208_bool = false;
		if(var_184_float > 0) {
			if(var_201_float > (var_184_float * var_184_float))
				var_208_bool = true;
		}
		if(var_208_bool != 0) {
			@Stop();
			var_181_bool = false;
			return 16;
		}
		if(var_201_float > (var_183_float * var_183_float)) {
			var_182_object->GetPFPosition(var_198_cvector);
			@FindPathTo(var_202_object, var_198_cvector);
			if(var_202_object != null) {
				var_202_object = var_197_object;
				var_202_object = null;
			}
			if(var_197_object != null) {
				if(var_196_bool == 0) goto Label_2362;
				var_196_bool = false;
				@RotatePath(var_197_object, var_195_bool);
				if(!var_195_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_221_string;
						func_2456(var_221_string);
						string var_222_string;
						func_2458(var_222_string);
						@FollowPath(var_197_object, var_185_bool, var_195_bool, var_221_string, var_222_string);
						if(!var_195_bool) { //@nz
							if(var_0_object == 0) goto Label_2381;
							var_197_object = null;
						}
					EMIT "GOTO 0x94e";

					Label_2381:
						} else {
					var_197_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_195_bool);
					if(!var_195_bool) { //@nz
						if(var_0_object != 0) {
							var_197_object = null;
							goto Label_2409;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2409;
		}
			var_202_object = null;
			goto Label_2407;

		Label_2407:
			var_197_object = null;

		}
	Label_2409:
		for(;;) {
			var_181_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_1799(object var_0_object, float var_407_float, int var_408_int)
{
	object var_412_object; float var_413_float; float var_414_float;
	@GetVictim((var_407_float * 0.9), var_412_object);
	@ReportAttack(var_0_object);
	if(var_412_object == var_0_object) {
		float var_418_float; object var_419_object; int var_420_int;
		var_412_object = var_419_object;
		var_408_int = var_420_int;
		func_1529(var_420_int);
		var_418_float = var_413_float;
		float var_421_float; object var_422_object; float var_423_float; int var_424_int;
		var_412_object = var_422_object;
		int var_425_int; object var_426_object; int var_427_int;
		var_412_object = var_426_object;
		var_408_int = var_427_int;
		func_1532(var_427_int);
		var_425_int = var_424_int;
		func_2506(var_421_float, var_422_object, var_423_float, var_424_int);
		var_421_float = var_414_float;
		int var_486_int;
		func_2182(var_486_int);
		@ReportHit(var_0_object, var_486_int, var_414_float, var_423_float);
		object var_487_object; float var_488_float;
		var_412_object = var_487_object;
		var_414_float = var_488_float;
		func_2189();
	}
}
EMIT "Stack[-3] = 0";


void func_1297(object var_0_object)
{
	func_2904(var_0_object);
}


void func_2855(void)
{
	bool var_187_bool;
	@CameraSwitchToNormal(true);
	bool var_189_bool;
	func_3683(var_189_bool);
	if(var_189_bool != 0) {
	} else {
		@HasAnimationTrack(var_187_bool, "head");
		if(var_187_bool == 0) goto Label_2872;
		@UnlookAsync("head");
	}
Label_2872:
	
}


void func_3369(int var_136_int, string var_137_string)
{
	int var_139_int;
	@GetInvItemByName(var_139_int, var_137_string);
	var_139_int = var_136_int;
}


void func_1838(object var_0_object, object var_1_object, bool var_370_bool, float var_371_float)
{
	string var_379_string;
	func_2177(var_379_string);
	int var_376_int;
	@irand(var_376_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_3104();
	@PlayAnimation("all", ("attack_begin" + (var_376_int + 1)));
	@WaitForAnimEnd();
	int var_378_int;
	func_2145(var_378_int, var_379_string);
	bool var_404_bool;
	func_2620(var_404_bool, var_0_object);
	if(!var_404_bool) { //@nz
		@StopAsync();
		var_370_bool = false;
		return 8;
	}
	float var_407_float; int var_408_int;
	var_371_float = var_407_float;
	var_376_int = var_408_int;
	func_1799(var_379_string, var_407_float, var_408_int);
	bool var_377_bool;
	@HasAnimation(var_377_bool, "all", ("attack_middle" + var_376_int));
	if(var_377_bool != 0) {
		func_3104();
		@PlayAnimation("all", ("attack_middle" + var_376_int));
		@WaitForAnimEnd();
		func_2177(var_379_string);
		bool var_496_bool;
		func_2620(var_496_bool, var_0_object);
		if(!var_496_bool) { //@nz
			@StopAsync();
			var_370_bool = false;
			return 8;
		}
		float var_499_float; int var_500_int;
		var_371_float = var_499_float;
		func_1799(var_379_string, var_499_float, var_500_int);
		var_378_int = 1;

		for(;;) {
			var_379_string = (("attack_middle" + var_500_int) + "_") + var_378_int;
			@HasAnimation(var_377_bool, "all", var_379_string);
			if(!var_377_bool) { //@nz
			} else {
				func_3104();
				@PlayAnimation("all", var_379_string);
				@WaitForAnimEnd();
				func_2177(var_379_string);
				bool var_522_bool;
				func_2620(var_522_bool, var_0_object);
				if(!var_522_bool) { //@nz
					@StopAsync();
					var_370_bool = false;
					return 8;
				}
				float var_525_float; int var_526_int;
				var_371_float = var_525_float;
				var_376_int = var_526_int;
				func_1799(var_379_string, var_525_float, var_526_int);
				var_378_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_376_int));
		bool var_511_bool;
		func_2191(var_511_bool);
		if(var_511_bool != 0) {
			bool var_512_bool;
			func_1975(var_512_bool, 0.75);
			@StopAsync();
		}
		var_370_bool = true;
		return 8;

	}
}


// @pe
void func_3374(object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	TaskCall(2);
	func_471(var_20_object);
	TaskReturn();
}


void func_2873(string var_160_string)
{
	bool var_164_bool; float var_165_float; float var_166_float;
	@lshHasAnimation(var_164_bool, var_160_string);
	if(var_164_bool != 0) {
		@lshGetAnimTimes(var_160_string, var_165_float, var_166_float);
		@lshPlayAnimation(var_165_float, var_166_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_160_string);
	}
	
}


void func_838(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_974(var_17_object, var_18_bool);
}


void func_2889(string var_138_string, bool var_139_bool)
{
	bool var_145_bool; float var_146_float; float var_147_float;
	@lshHasAnimation(var_145_bool, var_138_string);
	if(var_145_bool != 0) {
		@lshGetAnimTimes(var_138_string, var_146_float, var_147_float);
		@lshPlayAnimation(var_146_float, var_147_float, var_139_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_138_string);
	}
	
}


void func_846(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_981(var_22_bool, var_23_int);
}


void func_2904(object var_22_object)
{
	float var_25_float;
	var_22_object->GetEyesHeight(var_25_float);
	cvector var_26_cvector = [0.0, 0.0, 0.0];
	var_27_float = GetByIndex(var_26_cvector, 1);
	var_25_float = var_27_float;
	SetByIndex(var_26_cvector, 1) = var_27_float;
	@LookAsync(var_22_object, "head", var_26_cvector);
}


// @pe
void func_3419(bool var_22_bool, object var_23_object, string var_24_string)
{
	if(var_24_string == "unholster") {
		bool var_27_bool; object var_28_object;
		var_23_object = var_28_object;
		func_3634(var_28_object);
		var_27_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0xd79";
	}
	if(var_24_string == "player_shot") {
		bool var_31_bool; object var_32_object;
		var_23_object = var_32_object;
		func_3639(var_31_bool, var_32_object);
		var_31_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0xd79";
	}
	if(var_24_string == "battle") {
		bool var_48_bool; object var_49_object;
		var_23_object = var_49_object;
		func_3660(var_49_object);
		var_48_bool = var_22_bool;
		return 0;
	}
	var_22_bool = false;
}


void func_863(object var_2_object, object var_19_object)
{
	bool var_24_bool; object var_25_object;
	func_2620(var_24_bool, var_25_object);
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
	func_3571(var_62_object);
	int var_23_int;
	var_61_int = var_23_int;
	if(var_23_int > 0) {
		if(var_23_int > 1)
			func_846(var_23_int);
		object var_69_object;
		var_19_object = var_69_object;
		func_3580(var_69_object);
		var_2_object = true;
		@SetTimer(110, 10.0);
	}
}


void func_2915(void)
{
	bool var_21_bool;
	func_3683(var_21_bool);
	if(var_21_bool != 0)
		@lshStopSpeech();
}


void func_2922(string var_57_string, int var_58_int, int var_59_int)
{
	bool var_61_bool;
	int var_63_int;
	var_58_int = var_63_int;
	int var_64_int;
	var_59_int = var_64_int;
	bool var_62_bool;
	func_3023(var_62_bool, var_63_int, var_64_int);
	if(var_62_bool != 0)
		@AddItem(var_61_bool, var_57_string, 0);
}


// @pe
void func_2411(object var_0_object, object var_1_object, int var_26_int)
{
	if(var_26_int != 0)
		return 0;
	bool var_29_bool;
	func_2449(var_29_bool, var_1_object);
	if(!var_29_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2933(string var_35_string, int var_36_int, int var_37_int, int var_38_int)
{
	int var_41_int; bool var_42_bool;
	int var_44_int;
	var_36_int = var_44_int;
	int var_45_int;
	var_37_int = var_45_int;
	bool var_43_bool;
	func_3023(var_43_bool, var_44_int, var_45_int);
	if(var_43_bool != 0) {
		@irand(var_41_int, var_38_int);
		@AddItem(var_42_bool, var_35_string, 0, (var_41_int + 1));
	}
}


// @pe
void func_3451(object var_52_object, string var_53_string)
{
	if(var_53_string == "unholster") {
		object var_56_object;
		var_52_object = var_56_object;
		func_3637();
	} else if(var_53_string == "player_shot") {
			object var_59_object;
			var_52_object = var_59_object;
			func_3654(var_59_object);
	}
Label_3475:
	for(;;) {

	}
	
	if(!(var_53_string == "battle")) goto Label_3475;
	object var_127_object;
	var_52_object = var_127_object;
	func_3663();
}


void func_2433(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2948(string var_44_string)
{
	bool var_53_bool; int var_54_int; bool var_55_bool; int var_56_int; bool var_57_bool; float var_58_float; cvector var_59_cvector; cvector var_60_cvector;
	@IsExisting3DSound(var_53_bool, var_44_string);
	if(!var_53_bool) { //@nz
		var_54_int = 0;

		for(;;) {
			@IsExisting3DSound(var_55_bool, (var_44_string + (var_54_int + 1)));
			if(!var_55_bool) { //@nz
				break;
			Label_2968:
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
	if(var_66_bool == 0) goto Label_2968;
}


void func_903(object var_0_object, object var_1_object)
{
	float var_111_float; cvector var_112_cvector; cvector var_113_cvector; bool var_114_bool; object var_115_object; bool var_116_bool;
	@rand(var_111_float, 0.5);
	@Sleep(var_111_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_915:
				@GetPosition(var_113_cvector);
				float var_120_float;
				func_962(var_120_float);
				@GetRandomPFPointInCircle(var_112_cvector, var_113_cvector, var_120_float, var_114_bool);
				if(var_114_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_915;
			}
				var_1_object = false;
		}
		}
		goto Label_931;

	Label_931:
		object var_124_object; cvector var_125_cvector;
		var_112_cvector = var_125_cvector;
		func_990(var_124_object, var_125_cvector);
		var_124_object = var_115_object;
		if(var_115_object != null) {
			@RotatePath(var_115_object, var_116_bool);
			if(var_116_bool != 0) {
				bool var_130_bool;
				func_988(var_130_bool);
				@FollowPath(var_115_object, var_130_bool, var_116_bool);
				var_115_object = null;
				if(var_116_bool != 0) {
					TaskCall(4);
					func_1160();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_115_object = null;
	}
	
}


// @pe
void func_2449(bool var_29_bool, object var_30_object)
{
	object var_32_object;
	var_30_object = var_32_object;
	bool var_31_bool;
	func_2620(var_31_bool, var_32_object);
	var_31_bool = var_29_bool;
}


void func_3476(bool var_19_bool, object var_20_object)
{
	bool var_22_bool;
	bool var_23_bool = false;
	bool var_24_bool; object var_25_object;
	var_20_object = var_25_object;
	func_3634(var_25_object);
	if(var_24_bool != 0) {
		bool var_26_bool; object var_27_object;
		func_2489(var_26_bool, var_27_object);
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


void func_2456(string var_221_string)
{
	var_221_string = "walk";
}


void func_2458(string var_222_string)
{
	var_222_string = "run";
}


// @pe
void func_2460(string var_449_string, int var_450_int)
{
	if(var_450_int == 2) {
		var_449_string = "fire";
		return 0;
	EMIT "GOTO 0x9a8";
	}
	if(var_450_int == 1) {
		var_449_string = "bullet";
		return 0;
	}
	var_449_string = "phys";
}


void func_1445(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_2474(cvector var_52_cvector, object var_53_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_53_object->GetPosition(var_57_cvector);
	var_52_cvector = var_57_cvector - var_56_cvector;
}


// @pe
void func_3499(object var_33_object)
{
	object var_34_object;
	var_33_object = var_34_object;
	func_3637();
}


void func_2989(object var_106_object)
{
	object var_108_object;
	@self(var_108_object);
	var_108_object = var_106_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3505(object var_21_object)
{
	bool var_22_bool; object var_23_object;
	func_2489(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		object var_26_object;
		func_2989(var_26_object);
		@ReportReputationChange(var_23_object, var_26_object, -0.05);
	}
}


void func_2481(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_2995(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_59_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_59_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_59_float;
}


void func_1975(bool var_512_bool, float var_513_float)
{
	float var_516_float; bool var_517_bool;
	@rand(var_516_float);
	if(var_516_float < var_513_float) {

		for(;;) {
			@IsAnimationPlaying(var_517_bool);
			if(!var_517_bool) { //@nz
			} else {
				bool var_520_bool;
				func_2073(var_520_bool);
				if(var_520_bool != 0) {
					var_512_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_512_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_2177(var_517_bool);
}


void func_2489(bool var_102_bool, object var_103_object)
{
	bool var_105_bool;
	@IsPlayerActor(var_103_object, var_105_bool);
	var_105_bool = var_102_bool;
}


// @pe
void func_3005(float var_459_float, float var_460_float, float var_461_float)
{
	if(var_460_float < var_461_float)
		var_460_float = var_459_float;
	else
		var_461_float = var_459_float;
	
}


void func_3518(bool var_19_bool, string var_20_string)
{
	object var_22_object;
	if(var_20_string == "heal") {
		@FindActor(var_22_object, "player");
		bool var_26_bool; object var_27_object;
		var_22_object = var_27_object;
		func_3670(var_27_object);
		var_26_bool = var_19_bool;
	EMIT "Stack[-1] = 0";
	}
	var_19_bool = false;
}


void func_2494(bool var_53_bool, object var_54_object, string var_55_string)
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


void func_962(float var_120_float)
{
	float var_122_float;
	@GetCameraFarDistance(var_122_float);
	var_122_float = var_120_float;
}


// @pe
void func_3012(float var_469_float, float var_470_float, float var_471_float, float var_472_float)
{
	if(var_470_float < var_471_float) {
		var_471_float = var_469_float;
		return 0;
	}
	if(var_470_float > var_472_float) {
		var_472_float = var_469_float;
		return 0;
	}
	var_470_float = var_469_float;
}


void func_2506(float var_421_float, object var_422_object, float var_423_float, int var_424_int)
{
	int var_434_int; int var_436_int;
	object var_441_object;
	var_422_object = var_441_object;
	bool var_440_bool;
	func_2494(var_440_bool, var_441_object, "health");
	if(!var_440_bool) //@nz
		var_421_float = 0.0;
	bool var_444_bool; object var_445_object;
	func_2494(var_444_bool, var_445_object, "armor");
	if(!var_444_bool) //@nz
		var_434_int = 0;
	else
		var_445_object->GetProperty("armor", var_434_int);
	string var_449_string; int var_450_int;
	var_424_int = var_450_int;
	func_2460(var_449_string, var_450_int);
	string var_435_string = "armor_" + var_449_string;
	bool var_455_bool; object var_456_object; string var_457_string;
	var_422_object = var_456_object;
	func_2494(var_455_bool, var_456_object, var_457_string);
	if(!var_455_bool) //@nz
		var_436_int = 0;
	else
		var_422_object->GetProperty(var_457_string, var_436_int);

	float var_459_float;
	func_3005(var_459_float, ((var_434_int + var_436_int) / 100.0), (float)1);
	float var_437_float;
	var_459_float = var_437_float;
	float var_438_float;
	var_422_object->GetProperty("health", var_438_float);
	float var_439_float = var_423_float * (1 - var_437_float);
	float var_469_float;
	func_3012(var_469_float, (var_438_float - var_439_float), (float)0, (float)1);
	var_422_object->SetProperty("health", var_469_float);
	bool var_475_bool; object var_476_object;
	var_422_object = var_476_object;
	func_2489(var_475_bool, var_476_object);
	if(var_475_bool != 0) {
		float var_477_float = -var_439_float;
		func_3069(var_477_float);
	}
	var_439_float = var_421_float;
	
}


void func_3534(string var_30_string)
{
	object var_32_object;
	if(var_30_string == "heal") {
		@FindActor(var_32_object, "player");
		object var_36_object;
		var_32_object = var_36_object;
		func_3673();
		var_32_object = null;
	}
}


void func_974(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_3023(bool var_43_bool, int var_44_int, int var_45_int)
{
	int var_47_int;
	@irand(var_47_int, var_45_int);
	var_43_bool = var_47_int < var_44_int;
}


void func_2002(object var_0_object, bool var_309_bool, float var_310_float)
{
	bool var_316_bool; cvector var_317_cvector; cvector var_318_cvector; cvector var_319_cvector; float var_320_float;
	
	for(;;) {
		@IsAnimationPlaying(var_316_bool);
		if(!var_316_bool) //@nz
			break;
		bool var_322_bool;
		func_2073(var_322_bool);
		if(var_322_bool != 0) {
			var_309_bool = true;
			return 10;
		}
		bool var_365_bool;
		func_2620(var_365_bool, var_0_object);
		if(!var_365_bool) { //@nz
			var_309_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_317_cvector); //@t
		@GetPFPosition(var_318_cvector);
		var_319_cvector = var_317_cvector - var_318_cvector;
		var_320_float = var_319_cvector | var_319_cvector;
		if(var_320_float < (var_310_float * var_310_float)) {
			bool var_370_bool; float var_371_float;
			var_310_float = var_371_float;
			func_1838(var_319_cvector, var_320_float, var_370_bool, var_371_float);
			var_309_bool = true;
			return 10;
		}
		@sync();
	}
	func_2177(var_320_float);
	var_309_bool = false;
}


// @pe
void func_3028(float var_71_float, cvector var_72_cvector, cvector var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_71_float = (var_74_float * var_75_float) + (var_77_float * var_78_float);
}


void func_981(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_471(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_504(var_21_object);
	object var_101_object;
	var_20_object = var_101_object;
	func_3716(var_101_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_3547(string var_154_string, int var_155_int)
{
	string var_157_string = "idle";
	if(var_155_int != 0)
		var_157_string += var_155_int;
	var_157_string = var_154_string;
}


void func_988(bool var_130_bool)
{
	var_130_bool = false;
}


// @pe
void func_3037(float var_80_float, cvector var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0);
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_85_float = GetByIndex(var_81_cvector, 2);
	var_86_float = GetByIndex(var_81_cvector, 2);
	var_80_float = sqrt((var_82_float * var_83_float) + (var_85_float * var_86_float));
}


void func_990(object var_124_object, cvector var_125_cvector)
{
	object var_127_object;
	@FindShiftedPathTo(var_127_object, var_125_cvector);
	var_127_object = var_124_object;
}
EMIT "Stack[-1] = 0";


void func_3554(int var_148_int)
{
	int var_151_int; bool var_152_bool;
	var_151_int = 0;
	
	for(;;) {
		string var_154_string; int var_155_int;
		var_151_int = var_155_int;
		func_3547(var_154_string, var_155_int);
		@HasAnimation(var_152_bool, "all", var_154_string);
		if(!var_152_bool) //@nz
			break;
		var_151_int += 1;
	}
	var_151_int = var_148_int;
}


// @pe
void func_3047(float var_68_float, cvector var_69_cvector, cvector var_70_cvector)
{
	cvector var_72_cvector;
	var_69_cvector = var_72_cvector;
	cvector var_73_cvector;
	var_70_cvector = var_73_cvector;
	float var_71_float;
	func_3028(var_71_float, var_72_cvector, var_73_cvector);
	float var_80_float; cvector var_81_cvector;
	var_69_cvector = var_81_cvector;
	func_3037(var_80_float, var_81_cvector);
	float var_89_float; cvector var_90_cvector;
	var_70_cvector = var_90_cvector;
	func_3037(var_89_float, var_90_cvector);
	var_68_float = var_71_float / (var_80_float * var_89_float);
}


// @pe
void func_1521(object var_74_object)
{
	object var_81_object;
	func_1535(var_77_int, var_78_bool, var_79_float, var_80_int, var_81_object, var_81_object, true, 180.0);
}


// @pe
void func_3571(int var_61_int)
{
	bool var_63_bool;
	func_3711(var_63_bool);
	if(var_63_bool != 0)
		var_61_int = 2;
	else
		var_61_int = 0;
	
}


void func_504(object var_21_object)
{
	cvector var_32_cvector; cvector var_33_cvector; cvector var_34_cvector; cvector var_35_cvector; string var_36_string; object var_37_object; bool var_38_bool; bool var_39_bool; float var_40_float; cvector var_41_cvector;
	if(var_21_object == null) {
		func_595("fdie");
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
		func_2948(var_96_string);
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
void func_1529(float var_418_float)
{
	var_418_float = 0.03;
}


// @pe
void func_1532(int var_425_int)
{
	var_425_int = 0;
}


void func_2045(object var_0_object, bool var_324_bool)
{
	cvector var_330_cvector; cvector var_331_cvector;
	bool var_335_bool;
	func_2620(var_335_bool, var_0_object);
	if(!var_335_bool) { //@nz
		var_324_bool = false;
		return 10;
	}
	bool var_338_bool;
	float var_334_float;
	func_2134(var_334_float, var_338_bool);
	if(var_338_bool != 0) {
		var_0_object->GetPFPosition(var_330_cvector); //@t
		@GetPFPosition(var_331_cvector);
		var_0_object->GetAttackDistance(var_334_float); //@t
		var_324_bool = ((var_330_cvector - var_331_cvector) | (var_330_cvector - var_331_cvector)) <= ((var_334_float + 50) * (var_334_float + 50));
		return 10;
	}
	var_324_bool = false;
}


void func_1535(object var_0_object, string var_3_string, bool var_5_bool, object var_81_object, bool var_82_bool, float var_83_float, bool var_158_bool, bool var_250_bool)
{
	float var_95_float; cvector var_96_cvector; cvector var_97_cvector; bool var_99_bool; float var_102_float; cvector var_103_cvector; bool var_104_bool; float var_105_float;
	func_1764(var_103_cvector, var_104_bool, var_105_float);
	var_5_bool = 0;
	var_130_bool = IsFuncExist(var_81_object, "@GetAttackDistance", 1);
	if(var_130_bool != 0) {
		var_81_object->GetAttackDistance(var_95_float);
		var_95_float += 50;
	} else {
						var_83_float = var_95_float;
	}
	if(var_95_float >= 150)
		var_95_float = 150;
	var_3_string = false;
	var_0_object = var_81_object;
	bool var_98_bool;
	@IsPlayerActor(var_0_object, var_98_bool);
	if(var_98_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_136_object;
		func_2989(var_136_object);
		@SendPlayerEnemy(var_81_object, var_136_object);
	}
	if(var_82_bool != 0)
		var_99_bool = false;
	else
		var_99_bool = true;

	
Label_1575:
	for(;;) {
		bool var_141_bool = false;
		bool var_142_bool;
		func_2620(var_142_bool, var_0_object);
		if(var_142_bool != 0) {
			if(!var_3_string) //@nz
				var_141_bool = true;
		}
		if(var_141_bool != 0) {
			func_2177(var_105_float);
			var_0_object->GetPFPosition(var_96_cvector); //@t
			@GetPFPosition(var_97_cvector);
			var_102_float = (var_96_cvector - var_97_cvector) | (var_96_cvector - var_97_cvector);
			if(var_102_float >= ((400.0 + var_95_float) * (400.0 + var_95_float))) {
				bool var_152_bool; float var_154_float;
				var_95_float = var_154_float;
				TaskCall(7);
				func_2204(var_160_bool, var_152_bool, var_0_object, var_154_float, 3000.0, true, false);
				TaskReturn();
				if(!var_158_bool) { //@nz
				} else {
					var_99_bool = false;
			} else {
			if(var_102_float >= (var_83_float * var_83_float)) {
				var_0_object->GetPFPosition(var_103_cvector); //@t
				@CanReachByPF(var_104_bool, var_103_cvector);
				if(!var_104_bool) { //@nz
					bool var_244_bool; float var_246_float;
					var_95_float = var_246_float;
					TaskCall(7);
					func_2204(var_252_bool, var_244_bool, var_0_object, var_246_float, 3000.0, true, false);
					TaskReturn();
					if(!var_250_bool) { //@nz
						goto Label_1747;
					}
					var_99_bool = false;
					goto Label_1575;
				}
				if(!var_99_bool) { //@nz
					func_2770(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_2177(var_105_float);
					@StopAsync();
					var_99_bool = true;
					bool var_266_bool;
					func_2620(var_266_bool, var_0_object);
					if(!var_266_bool) { //@nz
						goto Label_1747;
					}
				}
				@rand(var_105_float);
				bool var_269_bool;
				var_271_bool = var_105_float < 0.25;
				if(var_271_bool != 1) {
					bool var_272_bool;
					func_2134(true, var_272_bool);
					if(var_272_bool != 1)
						var_269_bool = false;
				}
				if(var_269_bool != 0) {
					@Face(var_0_object);
					func_2184();
					@PlayAnimation("all", "attack_stay");
					bool var_309_bool; float var_310_float;
					func_2002(var_105_float, var_309_bool, var_310_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_2177(var_105_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_531_bool;
					func_2134(var_105_float, var_531_bool);
					var_532_bool = !var_531_bool; //@nz
					if(var_532_bool == 0) goto Label_1737;
					bool var_533_bool;
					func_2620(var_533_bool, var_0_object);
					if(!var_533_bool) { //@nz
						goto Label_1747;
					}
					var_0_object->GetPFPosition(var_96_cvector); //@t
					@GetPFPosition(var_97_cvector);
					if(!(((var_96_cvector - var_97_cvector) | (var_96_cvector - var_97_cvector)) < (var_310_float * var_310_float))) goto Label_1737;
					bool var_538_bool; float var_539_float;
					var_83_float = var_539_float;
					func_1838(var_104_bool, var_105_float, var_538_bool, var_539_float);
					var_540_bool = !var_538_bool; //@nz
					if(var_540_bool == 0) goto Label_1737;
					goto Label_1747;
			}
				bool var_541_bool; float var_542_float;
				var_83_float = var_542_float;
				func_1838(var_104_bool, var_105_float, var_541_bool, var_542_float);
				if(!var_541_bool) { //@nz
					goto Label_1747;
				}
				var_99_bool = true;

			}
		Label_1737:
			goto Label_1746;
			}
			Label_1746:
			}
		}
	Label_1747:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_98_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


