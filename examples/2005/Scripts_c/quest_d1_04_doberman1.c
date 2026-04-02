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
			func_2900();
			if(var_18_object == 34216) {
				bool var_24_bool;
				func_3099(var_1_object);
				if(var_24_bool != 0) {
					object var_32_object; object var_33_object;
					var_32_object = var_1_object;
					var_33_object = var_0_object;
					func_3093();
					func_162(var_19_bool, "Neutral");
					var_0_object->SetMessage(532742); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(532995, 34793, 34495); //@t
					var_0_object->AddReply(533000, 34496, 34500); //@t
					return 0;
				}
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532746); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532747, -1, 34221); //@t
				var_0_object->AddReply(532997, -1, 34497); //@t
				return 0;
			}
			if(var_18_object == 34793) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(533285); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533286, 34496, 34794); //@t
				var_0_object->AddReply(533287, 34796, 34795); //@t
				return 0;
			}
			if(var_18_object == 34796) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(533288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533293, 34798, 34802); //@t
				var_0_object->AddReply(533294, 34496, 34803); //@t
				return 0;
			}
			if(var_18_object == 34496) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533001, 34503, 34502); //@t
				var_0_object->AddReply(533003, 34503, 34504); //@t
				return 0;
			}
			if(var_18_object == 34503) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(533002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532998, 34499, 34498); //@t
				var_0_object->AddReply(533005, 34508, 34507); //@t
				return 0;
			}
			if(var_18_object == 34508) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(533006); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533007, 34499, 34509); //@t
				return 0;
			}
			if(var_18_object == 34499) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532999); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533295, 34807, 34806); //@t
				var_0_object->AddReply(533369, 34869, 34868); //@t
				return 0;
			}
			if(var_18_object == 34869) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(533370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533371, 34807, 34870); //@t
				var_0_object->AddReply(533372, -1, 34871); //@t
				return 0;
			}
			if(var_18_object == 34807) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(533296); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532743, 34218, 34217); //@t
				return 0;
			}
			if(var_18_object == 34218) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(532744); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533289, 34798, 34797); //@t
				var_0_object->AddReply(533291, 34798, 34799); //@t
				return 0;
			}
			if(var_18_object == 34798) {
				func_162(var_19_bool, "Neutral");
				var_0_object->SetMessage(533290); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(532745, -1, 34219); //@t
				var_0_object->AddReply(533292, -1, 34801); //@t
				return 0;
			}
			var_3_string = true;
			bool var_157_bool;
			func_3661(var_157_bool);
			if(var_157_bool != 0)
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
		func_3597(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			object var_25_object;
			var_18_bool = var_25_object;
			func_3600(var_25_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_3606();
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
		func_3663();
		func_647();
	
		for(;;) {
			var_2_object = false;
			func_908(var_16_object, var_17_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3597(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_843(var_20_int);
			object var_28_object;
			var_18_bool = var_28_object;
			func_3600(var_28_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_3483(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_3566(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_843(var_20_int);
			object var_71_object;
			var_18_bool = var_71_object;
			func_3576(var_71_object);
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
		func_3691(var_26_bool);
		bool var_23_bool;
		if(var_23_bool != 0) {
			int var_27_int; object var_28_object; bool var_29_bool;
			var_18_bool = var_28_object;
			var_20_bool = var_29_bool;
			func_3584(var_28_object, var_29_bool);
			var_27_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_843(var_22_int);
				object var_71_object;
				var_18_bool = var_71_object;
				func_3591(var_71_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3643(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_843(var_20_int);
			object var_28_object;
			var_18_bool = var_28_object;
			func_3646();
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
		func_3397(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_843(var_21_int);
			object var_51_object; string var_52_string;
			var_18_object = var_51_object;
			var_19_bool = var_52_string;
			func_3429(var_51_object, var_52_string);
		} else {
			int var_127_int; string var_128_string; object var_129_object;
			var_19_bool = var_128_string;
			var_18_object = var_129_object;
			func_3607(var_129_object);
			var_127_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_784;
			if(var_21_int > 1)
				func_843(var_21_int);
			string var_134_string; object var_135_object;
			var_19_bool = var_134_string;
			var_18_object = var_135_object;
			func_3610();
		}
	Label_784:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, string var_8_string, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		bool var_19_bool; string var_20_string;
		func_3496(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_843(var_20_string);
			string var_29_string;
			var_18_bool = var_29_string;
			func_3512(var_29_string);
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		bool var_19_bool; object var_20_object;
		func_3454(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_843(var_20_object);
			object var_32_object;
			var_18_bool = var_32_object;
			func_3477(var_32_object);
		} else {
			object var_34_object;
			func_868(var_34_object, var_34_object);
		}
	
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_19_object;
		func_868(var_19_object, var_19_object);
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
		func_843(var_17_bool);
		func_3606();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_843(var_18_bool);
		object var_20_object;
		var_18_bool = var_20_object;
		func_3373();
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
		func_3597(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1246();
			object var_27_object;
			var_18_bool = var_27_object;
			func_3600(var_27_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_3483(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_3566(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1246();
			object var_70_object;
			var_18_bool = var_70_object;
			func_3576(var_70_object);
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
		func_3691(var_26_bool);
		bool var_23_bool;
		if(var_23_bool != 0) {
			int var_27_int; object var_28_object; bool var_29_bool;
			var_18_bool = var_28_object;
			var_20_bool = var_29_bool;
			func_3584(var_28_object, var_29_bool);
			var_27_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_1246();
				object var_70_object;
				var_18_bool = var_70_object;
				func_3591(var_70_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3643(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1246();
			object var_27_object;
			var_18_bool = var_27_object;
			func_3646();
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
		func_3397(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_1246();
			object var_50_object; string var_51_string;
			var_18_object = var_50_object;
			var_19_bool = var_51_string;
			func_3429(var_50_object, var_51_string);
		} else {
			int var_126_int; string var_127_string; object var_128_object;
			var_19_bool = var_127_string;
			var_18_object = var_128_object;
			func_3607(var_128_object);
			var_126_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_1129;
			if(var_21_int > 1)
				func_1246();
			string var_133_string; object var_134_object;
			var_19_bool = var_133_string;
			var_18_object = var_134_object;
			func_3610();
		}
	Label_1129:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, string var_8_string, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		string var_20_string;
		var_18_bool = var_20_string;
		bool var_19_bool;
		func_3496(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_1246();
			string var_28_string;
			var_18_bool = var_28_string;
			func_3512(var_28_string);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_1246();
		func_3606();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_18_bool = var_20_object;
		bool var_19_bool;
		func_3454(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_1246();
			object var_31_object;
			var_18_bool = var_31_object;
			func_3477(var_31_object);
		}
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3597(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1450();
			object var_29_object;
			var_18_bool = var_29_object;
			func_3600(var_29_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_3483(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_3566(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1450();
			object var_72_object;
			var_18_bool = var_72_object;
			func_3576(var_72_object);
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
		func_3691(var_26_bool);
		bool var_23_bool;
		if(var_23_bool != 0) {
			int var_27_int; object var_28_object; bool var_29_bool;
			var_18_bool = var_28_object;
			var_20_bool = var_29_bool;
			func_3584(var_28_object, var_29_bool);
			var_27_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_1450();
				object var_72_object;
				var_18_bool = var_72_object;
				func_3591(var_72_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_3643(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_1450();
			object var_29_object;
			var_18_bool = var_29_object;
			func_3646();
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
		func_3397(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_1450();
			object var_52_object; string var_53_string;
			var_18_object = var_52_object;
			var_19_bool = var_53_string;
			func_3429(var_52_object, var_53_string);
		} else {
			int var_128_int; string var_129_string; object var_130_object;
			var_19_bool = var_129_string;
			var_18_object = var_130_object;
			func_3607(var_130_object);
			var_128_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_1435;
			if(var_21_int > 1)
				func_1450();
			string var_135_string; object var_136_object;
			var_19_bool = var_135_string;
			var_18_object = var_136_object;
			func_3610();
		}
	Label_1435:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, string var_9_string, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		string var_20_string;
		var_18_bool = var_20_string;
		bool var_19_bool;
		func_3496(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_1450();
			string var_30_string;
			var_18_bool = var_30_string;
			func_3512(var_30_string);
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_1450();
		object var_21_object;
		var_18_bool = var_21_object;
		func_3373();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		if(var_18_bool != 111)
			return 4;
		bool var_25_bool;
		func_2625(var_25_bool, var_0_object);
		if(!var_25_bool) { //@nz
			func_1450();
			return 4;
		}
		cvector var_21_cvector;
		@GetDirection(var_21_cvector);
		cvector var_62_cvector;
		func_2479(var_62_cvector, var_0_object);
		cvector var_22_cvector;
		var_62_cvector = var_22_cvector;
		float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
		var_21_cvector = var_69_cvector;
		var_22_cvector = var_70_cvector;
		func_3032(var_68_float, var_69_cvector, var_70_cvector);
		if(var_68_float < 0.49999997)
			func_2775(var_0_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_1450();
		func_3606();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_18_bool = var_20_object;
		bool var_19_bool;
		func_3454(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_1450();
			object var_33_object;
			var_18_bool = var_33_object;
			func_3477(var_33_object);
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
		func_2272(var_17_bool);
		func_3606();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, int var_18_int)
	{
		if(var_18_int == 1) {
			func_3073(var_1_object);
		} else {
			int var_26_int;
			func_2416(var_17_bool, var_26_int, var_26_int);
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
			func_2889(var_22_object);
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
		func_2272(var_18_object);
		object var_23_object;
		var_18_object = var_23_object;
		func_3373();
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
	func_3352(var_19_object);
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
	func_2693(var_22_object, var_23_int, var_24_float);
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
	func_2761(var_26_float, var_27_cvector, var_28_cvector);
}


// @pe
void func_3584(int var_27_int, object var_28_object)
{
	object var_31_object;
	var_28_object = var_31_object;
	int var_30_int;
	func_3566(var_30_int, var_31_object);
	var_30_int = var_27_int;
}


// @pe
void func_1537(int var_425_int)
{
	var_425_int = 0;
}


void func_2050(object var_0_object, bool var_324_bool)
{
	cvector var_330_cvector; cvector var_331_cvector;
	bool var_335_bool;
	func_2625(var_335_bool, var_0_object);
	if(!var_335_bool) { //@nz
		var_324_bool = false;
		return 10;
	}
	bool var_338_bool;
	float var_334_float;
	func_2139(var_334_float, var_338_bool);
	if(var_338_bool != 0) {
		var_0_object->GetPFPosition(var_330_cvector); //@t
		@GetPFPosition(var_331_cvector);
		var_0_object->GetAttackDistance(var_334_float); //@t
		var_324_bool = ((var_330_cvector - var_331_cvector) | (var_330_cvector - var_331_cvector)) <= ((var_334_float + 50) * (var_334_float + 50));
		return 10;
	}
	var_324_bool = false;
}


void func_3073(object var_21_object)
{
	bool var_23_bool;
	@IsPlayerActor(var_21_object, var_23_bool);
	if(var_23_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1540(object var_0_object, string var_3_string, bool var_5_bool, object var_81_object, bool var_82_bool, float var_83_float, bool var_158_bool, bool var_250_bool)
{
	float var_95_float; cvector var_96_cvector; cvector var_97_cvector; bool var_99_bool; float var_102_float; cvector var_103_cvector; bool var_104_bool; float var_105_float;
	func_1769(var_103_cvector, var_104_bool, var_105_float);
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
		func_2974(var_136_object);
		@SendPlayerEnemy(var_81_object, var_136_object);
	}
	if(var_82_bool != 0)
		var_99_bool = false;
	else
		var_99_bool = true;

	
Label_1580:
	for(;;) {
		bool var_141_bool = false;
		bool var_142_bool;
		func_2625(var_142_bool, var_0_object);
		if(var_142_bool != 0) {
			if(!var_3_string) //@nz
				var_141_bool = true;
		}
		if(var_141_bool != 0) {
			func_2182(var_105_float);
			var_0_object->GetPFPosition(var_96_cvector); //@t
			@GetPFPosition(var_97_cvector);
			var_102_float = (var_96_cvector - var_97_cvector) | (var_96_cvector - var_97_cvector);
			if(var_102_float >= ((400.0 + var_95_float) * (400.0 + var_95_float))) {
				bool var_152_bool; float var_154_float;
				var_95_float = var_154_float;
				TaskCall(7);
				func_2209(var_160_bool, var_152_bool, var_0_object, var_154_float, 3000.0, true, false);
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
					func_2209(var_252_bool, var_244_bool, var_0_object, var_246_float, 3000.0, true, false);
					TaskReturn();
					if(!var_250_bool) { //@nz
						goto Label_1752;
					}
					var_99_bool = false;
					goto Label_1580;
				}
				if(!var_99_bool) { //@nz
					func_2775(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_2182(var_105_float);
					@StopAsync();
					var_99_bool = true;
					bool var_266_bool;
					func_2625(var_266_bool, var_0_object);
					if(!var_266_bool) { //@nz
						goto Label_1752;
					}
				}
				@rand(var_105_float);
				bool var_269_bool;
				var_271_bool = var_105_float < 0.25;
				if(var_271_bool != 1) {
					bool var_272_bool;
					func_2139(true, var_272_bool);
					if(var_272_bool != 1)
						var_269_bool = false;
				}
				if(var_269_bool != 0) {
					@Face(var_0_object);
					func_2189();
					@PlayAnimation("all", "attack_stay");
					bool var_309_bool; float var_310_float;
					func_2007(var_105_float, var_309_bool, var_310_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_2182(var_105_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_527_bool;
					func_2139(var_105_float, var_527_bool);
					var_528_bool = !var_527_bool; //@nz
					if(var_528_bool == 0) goto Label_1742;
					bool var_529_bool;
					func_2625(var_529_bool, var_0_object);
					if(!var_529_bool) { //@nz
						goto Label_1752;
					}
					var_0_object->GetPFPosition(var_96_cvector); //@t
					@GetPFPosition(var_97_cvector);
					if(!(((var_96_cvector - var_97_cvector) | (var_96_cvector - var_97_cvector)) < (var_310_float * var_310_float))) goto Label_1742;
					bool var_534_bool; float var_535_float;
					var_83_float = var_535_float;
					func_1843(var_104_bool, var_105_float, var_534_bool, var_535_float);
					var_536_bool = !var_534_bool; //@nz
					if(var_536_bool == 0) goto Label_1742;
					goto Label_1752;
			}
				bool var_537_bool; float var_538_float;
				var_83_float = var_538_float;
				func_1843(var_104_bool, var_105_float, var_537_bool, var_538_float);
				if(!var_537_bool) { //@nz
					goto Label_1752;
				}
				var_99_bool = true;

			}
		Label_1742:
			goto Label_1751;
			}
			Label_1751:
			}
		}
	Label_1752:
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


void func_0(object var_0_object, int var_43_int, object var_44_object)
{
	var_0_object = var_44_object;
	bool var_54_bool; object var_55_object;
	var_44_object = var_55_object;
	func_2791(var_54_bool, var_55_object, 70.0);
	if(!var_54_bool) { //@nz
		var_43_int = -2;
		return 8;
	}
	object var_50_object;
	@CreateDialog(var_50_object);
	int var_101_int;
	func_3655(var_101_int);
	var_50_object->SetNPCName(var_101_int);
	int var_102_int;
	func_3653(var_102_int);
	var_50_object->SetNPCDescription(var_102_int);
	string var_103_string;
	func_3657(var_103_string);
	var_50_object->SetPhoto(var_103_string);
	string var_104_string;
	func_3659(var_104_string);
	var_50_object->SetPhoto2(var_104_string);
	int var_105_int;
	func_3111(var_105_int);
	var_50_object->SetPlayerName(var_105_int);
	bool var_51_bool;
	@IsOverrideActive(var_51_bool);
	if(var_51_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	@DoDialog(var_50_object);
	object var_114_object; object var_115_object;
	var_44_object = var_114_object;
	var_50_object = var_115_object;
	TaskCall(1);
	func_74(var_116_object, var_117_object, var_118_string, var_119_bool, var_114_object, var_115_object);
	TaskReturn();
	bool var_53_bool;
	var_50_object->IsDialogEnd(var_53_bool);
	
	for(;;) {
		var_173_bool = !var_53_bool; //@nz
		if(var_173_bool == 0) goto Label_63;
		@sync();
		var_50_object->IsDialogEnd(var_53_bool);
	}
	
Label_63:
	object var_174_object;
	var_44_object = var_174_object;
	func_2859();
	@StopDialog(var_50_object);
	var_50_object->GetReturnValue(-1);
	int var_52_int = var_43_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3591(object var_72_object)
{
	object var_73_object;
	var_72_object = var_73_object;
	func_3576(var_73_object);
}


void func_3082(void)
{
	object var_383_object;
	@GetScene(var_383_object);
	object var_385_object;
	func_2974(var_385_object);
	@BroadcastMessage("battle", var_385_object, var_383_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3597(int var_21_int)
{
	var_21_int = 2;
}


// @pe
void func_3600(object var_29_object)
{
	object var_30_object;
	var_29_object = var_30_object;
	func_3671(var_30_object);
}


// @pe
void func_3093(void)
{
	@SetVariable("ood1Doberman1_1", 1);
}


void func_3606(void)
{
}


// @pe
void func_3607(int var_128_int)
{
	var_128_int = 0;
}


void func_2584(bool var_46_bool, object var_47_object)
{
	bool var_49_bool;
	var_47_object->IsDead(var_49_bool);
	var_49_bool = var_46_bool;
}


// @pe
void func_3610(void)
{
}


// @pe
void func_3099(bool var_121_bool)
{
	int var_123_int;
	func_3049(var_123_int, "ood1Doberman1_1");
	if(var_123_int == 0) {
		var_121_bool = true;
		return 0;
	}
	var_121_bool = false;
}


// @pe
void func_3612(bool var_24_bool)
{
	var_24_bool = false;
}


void func_2589(bool var_35_bool, object var_36_object)
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
		func_2584(var_46_bool, var_47_object);
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


void func_2078(bool var_322_bool)
{
	bool var_323_bool = false;
	bool var_324_bool;
	func_2050(var_323_bool, var_324_bool);
	if(var_324_bool != 0) {
		bool var_341_bool;
		func_2094(var_322_bool, var_323_bool, var_341_bool);
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
void func_3615(void)
{
}


void func_3617(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	@CanSee(var_34_bool, var_32_object);
	var_31_bool = true;
	if(var_34_bool != 1) {
		float var_36_float; object var_37_object;
		var_32_object = var_37_object;
		func_2486(var_36_float, var_37_object);
		var_45_bool = var_36_float <= 2250000;
		if(var_45_bool != 1)
			var_31_bool = false;
	}
}


void func_3111(int var_105_int)
{
	int var_107_int;
	@GetVariable("branch", var_107_int);
	if(var_107_int == 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0xc36";
	}
	if(var_107_int == 1) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
}


void func_2094(object var_0_object, bool var_4_bool, bool var_341_bool)
{
	object var_347_object; float var_349_float; cvector var_350_cvector; cvector var_351_cvector;
	@GetScene(var_347_object);
	bool var_348_bool = false;
	
	for(;;) {
		cvector var_352_cvector;
		func_2479(var_352_cvector, var_0_object);
		var_358_int = -var_352_cvector;
		@FindDirLength(var_349_float, var_358_int, var_4_bool);
		if(var_349_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_350_cvector); //@t
				@GetPFPosition(var_351_cvector);
				@WaitForAnimEnd();
				func_2182(var_351_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_348_bool = true;
				bool var_363_bool;
				func_2050(var_351_cvector, var_363_bool);
				var_364_bool = !var_363_bool; //@nz
				if(var_364_bool == 0) goto Label_2135;
		}
		for(;;) {
			var_348_bool = var_341_bool;

		}

	Label_2135:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_3632(object var_59_object)
{
	object var_60_object;
	var_59_object = var_60_object;
	func_3558(var_60_object);
}


// @pe
void func_3638(bool var_48_bool)
{
	var_48_bool = false;
}


void func_3128(int var_157_int)
{
	int var_159_int;
	@GetVariable("branch", var_159_int);
	var_159_int = var_157_int;
}


// @pe
void func_3641(void)
{
}


void func_3064(int var_28_int)
{
	float var_30_float;
	@GetGameTime(var_30_float);
	var_28_int = 1 + (var_30_float / 24);
}


// @pe
void func_3643(int var_21_int)
{
	var_21_int = 0;
}


// @pe
void func_3646(void)
{
}


// @pe
void func_3134(object var_35_object)
{
	int var_36_int;
	func_3128(var_36_int);
	if(var_36_int == 1)
		@WorkWithCorpse(var_35_object);
	else
		@Barter(var_35_object);
	
}


// @pe
void func_3648(bool var_26_bool)
{
	var_26_bool = false;
}


void func_2625(bool var_31_bool, object var_32_object)
{
	object var_36_object;
	var_32_object = var_36_object;
	bool var_35_bool;
	func_2589(var_35_bool, var_36_object);
	if(!var_35_bool) { //@nz
		var_31_bool = false;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	func_2499(var_53_bool, var_54_object, "noaccess");
	if(!var_53_bool) { //@nz
		var_31_bool = true;
		return 2;
	}
	int var_34_int;
	var_54_object->GetProperty("noaccess", var_34_int);
	var_31_bool = var_34_int == 0;
}


// @pe
void func_3651(void)
{
}


void func_3653(int var_102_int)
{
	var_102_int = 518097;
}


void func_3655(int var_101_int)
{
	var_101_int = 518096;
}


void func_3657(string var_103_string)
{
	var_103_string = "ui/NPC_Citizen2.png";
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_114_object, object var_115_object)
{
	var_0_object = var_115_object;
	var_1_object = var_114_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_121_bool;
		func_3099(var_1_object);
		if(var_121_bool != 0) {
			object var_129_object; object var_130_object;
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_3093();
			func_162(var_115_object, "Neutral");
			var_0_object->SetMessage(532742); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(532995, 34793, 34495); //@t
			var_0_object->AddReply(533000, 34496, 34500); //@t
		} else {
					func_162(var_115_object, "Neutral");
					var_0_object->SetMessage(532746); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(532747, -1, 34221); //@t
					var_0_object->AddReply(532997, -1, 34497); //@t
		}
	}
	for(;;) {
		bool var_152_bool;
		func_3661(var_152_bool);
		if(var_152_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2876(var_2_object);
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


void func_3659(string var_104_string)
{
	var_104_string = "ui/NPC_Citizen2_b.png";
}


void func_3147(int var_115_int, int var_116_int)
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
	func_3347(var_136_int, "Money");
	bool var_129_bool;
	@AddItem(var_129_bool, var_136_int, 0, var_128_int);
	
}


void func_3661(bool var_96_bool)
{
	var_96_bool = false;
}


void func_3663(void)
{
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_3247(true);
}


void func_3671(object var_30_object)
{
	bool var_32_bool;
	var_33_bool = GlobalVars[0];
	if(var_33_bool != 0) {
		@IsOverrideActive(var_32_bool);
		if(!var_32_bool) { //@nz
			object var_35_object;
			var_30_object = var_35_object;
			func_3134(var_35_object);
		}
	EMIT "GOTO 0xe68";
	}
	object var_42_object;
	var_30_object = var_42_object;
	func_3722(var_42_object);
}


// @pe
void func_600(string var_43_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_44_string;
	var_43_string = var_44_string;
	func_2933(var_44_string);
	@PlayAnimation("all", var_43_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_43_string);
	@RemoveEnvelope();
}


void func_2649(object var_35_object)
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


void func_2139(object var_0_object, bool var_272_bool)
{
	bool var_274_bool;
	var_277_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_277_bool != 0) {
		var_0_object->IsAttacking(var_274_bool); //@t
		var_274_bool = var_272_bool;
	}
	var_272_bool = false;
}


void func_2150(object var_2_object, bool var_5_bool)
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
	func_2200(var_398_float);
	if(var_391_float < var_398_float) {
		@irand(var_392_int, var_2_object);
		@Speak("attack" + (var_392_int + 1));
		int var_403_int;
		func_2198(var_403_int);
		var_5_bool = var_403_int;
	}
}


void func_3689(bool var_63_bool)
{
	var_63_bool = false;
}


void func_3178(string var_163_string)
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
void func_3691(bool var_23_bool)
{
	var_23_bool = true;
}


// @pe
void func_3694(object var_101_object)
{
	bool var_102_bool; object var_103_object;
	func_2494(var_102_bool, var_103_object);
	if(var_102_bool != 0) {
		object var_106_object;
		func_2974(var_106_object);
		@ReportReputationChange(var_103_object, var_106_object, -0.1, true);
		bool var_111_bool = true;
		func_3219();
	}
	func_3195();
	var_177_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_3195(void)
{
	int var_157_int;
	func_3128(var_157_int);
	if(var_157_int != 1) {
	}
	func_3178("liver");
	func_3178("kidney");
	func_3178("heart");
	func_3178("blood");
}


void func_2693(object var_22_object, int var_23_int, float var_24_float)
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
		func_2479(var_52_cvector, var_53_object);
		var_52_cvector = var_51_cvector;
		func_2980(var_50_cvector, var_51_cvector);
		var_50_cvector = var_34_cvector;
		@CreateVectorVector(var_35_object);
		var_36_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_36_int), var_37_bool, var_38_cvector, var_39_cvector);
			if(!var_37_bool) { //@nz
				break;
			Label_2755:
				var_35_object = null;
	}
			object var_112_object;
			var_22_object = var_112_object;
			func_2649(var_112_object);
		}
		if((var_39_cvector | var_34_cvector) >= 0.70710677)
			var_35_object->add(var_38_cvector);
		var_36_int += 1;
	}
	int var_40_int;
	var_35_object->size(var_40_int);
	if(var_40_int == 0) goto Label_2755;
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
	func_2761(var_69_float, var_70_cvector, var_71_cvector);
}


void func_2182(object var_0_object)
{
	func_3073(var_0_object);
}


void func_647(void)
{
	bool var_101_bool;
	func_2786(var_101_bool);
	if(!var_101_bool) //@nz
		func_3606();
}


// @pe
void func_3722(object var_42_object)
{
	object var_44_object;
	var_42_object = var_44_object;
	TaskCall(0);
	int var_43_int;
	func_0(var_45_object, var_43_int, var_44_object);
	TaskReturn();
}


void func_2187(int var_482_int)
{
	var_482_int = 0;
}


void func_1165(void)
{
	int var_141_int; int var_142_int; bool var_143_bool; float var_144_float; bool var_145_bool;
	@WaitForAnimEnd();
	bool var_146_bool;
	func_2786(var_146_bool);
	if(!var_146_bool) //@nz
		return 14;
	int var_148_int;
	func_3532(var_148_int);
	int var_139_int;
	var_148_int = var_139_int;
	int var_140_int = 0;
	
	for(;;) {
		bool var_161_bool = false;
		if(var_140_int < 5) {
			bool var_164_bool;
			func_2786(var_164_bool);
			if(var_164_bool != 0)
				var_161_bool = true;
		}
		if(var_161_bool != 0) {
			@irand(var_141_int, 3);
			if(var_141_int == 0) {
				if(var_139_int == 0) goto Label_1212;
				@irand(var_142_int, var_139_int);
				string var_170_string; int var_171_int;
				var_142_int = var_171_int;
				func_3525(var_170_string, var_171_int);
				@PlayAnimation("all", var_170_string);
				@WaitForAnimEnd(var_143_bool);
				if(!var_143_bool) { //@nz
				} else {
			} else {
			if(var_141_int == 1) {
				@rand(var_144_float, 4);
				@Sleep((var_144_float + 1), var_145_bool);
				if(!var_145_bool) { //@nz
					goto Label_1241;
				}
			} else if(var_140_int != 0) {
				goto Label_1241;
			}
			}
					bool var_173_bool;
					func_1244(var_173_bool);
					var_174_bool = !var_173_bool; //@nz
					if(var_174_bool == 0) goto Label_1236;
			}
		}
	Label_1241:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1236:
		@ResetAAS();
		var_140_int += 1;
	}
	
}


void func_2189(void)
{
	func_2933("attack_stay");
}


// @pe
void func_2194(void)
{
}


void func_3219(void)
{
	@ClearSubContainer(0);
	int var_118_int;
	func_3064(var_118_int);
	func_3147(0, (10 + (var_118_int * 10)));
	func_2907("hook", 1, 4);
	func_2907("watch", 1, 10);
}


void func_2196(bool var_507_bool)
{
	var_507_bool = true;
}


void func_2198(int var_403_int)
{
	var_403_int = 1;
}


void func_2200(float var_398_float)
{
	var_398_float = 0.5;
}


void func_2209(object var_2_object, bool var_152_bool, object var_153_object, float var_154_float, float var_155_float, bool var_156_bool, bool var_157_bool)
{
	object var_165_object;
	func_3073(var_165_object);
	@SetTimer(1, 5);
	bool var_163_bool;
	@CanSee(var_163_bool, var_165_object);
	if(var_163_bool != 0) {
		var_2_object = true;
		object var_169_object;
		var_153_object = var_169_object;
		func_2889(var_169_object);
	} else {
		var_2_object = false;
	}
	bool var_176_bool; object var_177_object;
	func_2494(var_176_bool, var_177_object);
	if(var_176_bool != 0) {
		object var_180_object;
		func_2974(var_180_object);
		@SendPlayerEnemy(var_177_object, var_180_object);
	}
	bool var_181_bool; object var_182_object; float var_183_float; float var_184_float; bool var_185_bool; bool var_186_bool;
	var_153_object = var_182_object;
	var_154_float = var_183_float;
	var_155_float = var_184_float;
	var_156_bool = var_185_bool;
	var_157_bool = var_186_bool;
	bool var_164_bool;
	func_2314(var_163_bool, var_164_bool, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool);
	var_181_bool = var_164_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_164_bool = var_152_bool;
	
}


// @pe
void func_162(object var_2_object, string var_133_string)
{
	bool var_134_bool;
	func_3661(var_134_bool);
	if(!var_134_bool) //@nz
		return 0;
	if(var_133_string == var_2_object)
		return 0;
	string var_137_string; bool var_138_bool;
	var_133_string = var_137_string;
	if(var_133_string == "")
		var_138_bool = false;
	else
		var_138_bool = true;
	func_2883(var_137_string, var_138_bool);
	var_2_object = var_133_string;
	
}


void func_3247(bool var_20_bool)
{
	@ClearSubContainer(0);
	int var_28_int;
	func_3064(var_28_int);
	int var_26_int;
	var_28_int = var_26_int;
	if(var_20_bool != 0) {
		func_2918("alpha_pills", 1, 2, 4);
		func_2918("meradorm", 2, 3, 3);
		if(var_26_int >= 3)
			func_2907("beta_pills", 1, 4);
		if(var_26_int >= 8) {
			func_2918("monomicin", 1, 2, 2);
		} else {
				if(var_26_int >= 4)
					func_2907("monomicin", 1, 2);
				func_2907("lockpick", 1, 4);
				func_2907("rifle_ammo", 1, 2);
				func_2907("revolver_ammo", 1, 2);
				func_2918("samopal_ammo", 1, 2, 2);
				if(var_26_int >= 8)
					func_2918("monomicin", 1, 2, 2);
			}
			} else if(var_26_int >= 4) {
		func_2907("monomicin", 1, 2);
			}
	
}


void func_2761(object var_24_object, cvector var_27_cvector, cvector var_28_cvector)
{
	object var_31_object;
	@GetScene(var_31_object);
	object var_32_object;
	@AddActorByType(var_32_object, "scripted", var_31_object, var_27_cvector, var_28_cvector, "blood_dir.xml");
	object var_35_object;
	var_24_object = var_35_object;
	func_2649(var_35_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2775(object var_94_object)
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


void func_1244(bool var_173_bool)
{
	var_173_bool = true;
}


void func_1246(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2272(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_2438(var_18_object);
}


void func_2786(bool var_101_bool)
{
	bool var_103_bool;
	@IsLoaded(var_103_bool);
	var_103_bool = var_101_bool;
}


void func_1251(object var_0_object, object var_61_object)
{
	var_0_object = var_61_object;
	bool var_68_bool;
	func_1302(var_68_bool);
	cvector var_66_cvector;
	@GetDirection(var_66_cvector);
	cvector var_76_cvector;
	func_2479(var_76_cvector, var_0_object);
	cvector var_67_cvector;
	var_76_cvector = var_67_cvector;
	float var_82_float; cvector var_83_cvector; cvector var_84_cvector;
	var_66_cvector = var_83_cvector;
	var_67_cvector = var_84_cvector;
	func_3032(var_82_float, var_83_cvector, var_84_cvector);
	if(var_82_float < 0) {
		func_2775(var_0_object);
		var_68_bool = true;
	} else {
		@Sleep(1.5, var_68_bool);
	}
	if(var_68_bool != 0) {
		func_2775(var_0_object);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2791(bool var_54_bool, object var_55_object, float var_56_float)
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
	func_2980(var_81_cvector, (var_70_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_71_cvector = ((var_69_cvector * var_56_float) + (var_81_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_73_bool;
	@IsOverrideActive(var_73_bool);
	if(var_73_bool != 0)
		var_54_bool = false;
	@StopWorld();
	@CameraTransit((var_68_cvector + var_71_cvector), var_70_cvector);
	var_94_float = GetByIndex(var_71_cvector, 0);
	var_95_float = GetByIndex(var_71_cvector, 2);
	@Rotate(var_94_float, var_95_float);
	bool var_96_bool;
	func_3661(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		@HasAnimationTrack(var_74_bool, "head");
		if(var_74_bool == 0) goto Label_2853;
		@LookAsyncCamera("head");
	}
Label_2853:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_54_bool = true;
	
}


void func_1769(object var_1_object, object var_2_object, bool var_4_bool)
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


void func_2314(object var_0_object, object var_1_object, bool var_181_bool, object var_182_object, float var_183_float, float var_184_float, bool var_185_bool, bool var_186_bool)
{
	bool var_195_bool; object var_197_object; cvector var_198_cvector; cvector var_199_cvector; float var_201_float; object var_202_object;
	var_0_object = false;
	var_1_object = var_182_object;
	bool var_196_bool;
	var_186_bool = var_196_bool;
	
	for(;;) {
		bool var_203_bool; object var_204_object;
		var_182_object = var_204_object;
		func_2454(var_203_bool, var_204_object);
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
				if(var_196_bool == 0) goto Label_2367;
				var_196_bool = false;
				@RotatePath(var_197_object, var_195_bool);
				if(!var_195_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_221_string;
						func_2461(var_221_string);
						string var_222_string;
						func_2463(var_222_string);
						@FollowPath(var_197_object, var_185_bool, var_195_bool, var_221_string, var_222_string);
						if(!var_195_bool) { //@nz
							if(var_0_object == 0) goto Label_2386;
							var_197_object = null;
						}
					EMIT "GOTO 0x953";

					Label_2386:
						} else {
					var_197_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_195_bool);
					if(!var_195_bool) { //@nz
						if(var_0_object != 0) {
							var_197_object = null;
							goto Label_2414;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2414;
		}
			var_202_object = null;
			goto Label_2412;

		Label_2412:
			var_197_object = null;

		}
	Label_2414:
		for(;;) {
			var_181_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_1804(object var_0_object, float var_407_float, int var_408_int)
{
	object var_412_object; float var_413_float; float var_414_float;
	@GetVictim((var_407_float * 0.9), var_412_object);
	@ReportAttack(var_0_object);
	if(var_412_object == var_0_object) {
		float var_418_float; object var_419_object; int var_420_int;
		var_412_object = var_419_object;
		var_408_int = var_420_int;
		func_1534(var_420_int);
		var_418_float = var_413_float;
		float var_421_float; object var_422_object; float var_423_float; int var_424_int;
		var_412_object = var_422_object;
		int var_425_int; object var_426_object; int var_427_int;
		var_412_object = var_426_object;
		var_408_int = var_427_int;
		func_1537(var_427_int);
		var_425_int = var_424_int;
		func_2511(var_421_float, var_422_object, var_423_float, var_424_int);
		var_421_float = var_414_float;
		int var_482_int;
		func_2187(var_482_int);
		@ReportHit(var_0_object, var_482_int, var_414_float, var_423_float);
		object var_483_object; float var_484_float;
		var_412_object = var_483_object;
		var_414_float = var_484_float;
		func_2194();
	}
}
EMIT "Stack[-3] = 0";


void func_3347(int var_136_int, string var_137_string)
{
	int var_139_int;
	@GetInvItemByName(var_139_int, var_137_string);
	var_139_int = var_136_int;
}


void func_1302(object var_0_object)
{
	func_2889(var_0_object);
}


// @pe
void func_3352(object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	TaskCall(2);
	func_476(var_20_object);
	TaskReturn();
}


void func_2859(void)
{
	bool var_176_bool;
	@CameraSwitchToNormal();
	bool var_177_bool;
	func_3661(var_177_bool);
	if(var_177_bool != 0) {
	} else {
		@HasAnimationTrack(var_176_bool, "head");
		if(var_176_bool == 0) goto Label_2875;
		@UnlookAsync("head");
	}
Label_2875:
	
}


void func_1843(object var_0_object, object var_1_object, bool var_370_bool, float var_371_float)
{
	string var_379_string;
	func_2182(var_379_string);
	int var_376_int;
	@irand(var_376_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_3082();
	@PlayAnimation("all", ("attack_begin" + (var_376_int + 1)));
	@WaitForAnimEnd();
	int var_378_int;
	func_2150(var_378_int, var_379_string);
	bool var_404_bool;
	func_2625(var_404_bool, var_0_object);
	if(!var_404_bool) { //@nz
		@StopAsync();
		var_370_bool = false;
		return 8;
	}
	float var_407_float; int var_408_int;
	var_371_float = var_407_float;
	var_376_int = var_408_int;
	func_1804(var_379_string, var_407_float, var_408_int);
	bool var_377_bool;
	@HasAnimation(var_377_bool, "all", ("attack_middle" + var_376_int));
	if(var_377_bool != 0) {
		func_3082();
		@PlayAnimation("all", ("attack_middle" + var_376_int));
		@WaitForAnimEnd();
		func_2182(var_379_string);
		bool var_492_bool;
		func_2625(var_492_bool, var_0_object);
		if(!var_492_bool) { //@nz
			@StopAsync();
			var_370_bool = false;
			return 8;
		}
		float var_495_float; int var_496_int;
		var_371_float = var_495_float;
		func_1804(var_379_string, var_495_float, var_496_int);
		var_378_int = 1;

		for(;;) {
			var_379_string = (("attack_middle" + var_496_int) + "_") + var_378_int;
			@HasAnimation(var_377_bool, "all", var_379_string);
			if(!var_377_bool) { //@nz
			} else {
				func_3082();
				@PlayAnimation("all", var_379_string);
				@WaitForAnimEnd();
				func_2182(var_379_string);
				bool var_518_bool;
				func_2625(var_518_bool, var_0_object);
				if(!var_518_bool) { //@nz
					@StopAsync();
					var_370_bool = false;
					return 8;
				}
				float var_521_float; int var_522_int;
				var_371_float = var_521_float;
				var_376_int = var_522_int;
				func_1804(var_379_string, var_521_float, var_522_int);
				var_378_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_376_int));
		bool var_507_bool;
		func_2196(var_507_bool);
		if(var_507_bool != 0) {
			bool var_508_bool;
			func_1980(var_508_bool, 0.75);
			@StopAsync();
		}
		var_370_bool = true;
		return 8;

	}
}


void func_2876(string var_154_string)
{
	float var_157_float; float var_158_float;
	@lshGetAnimTimes(var_154_string, var_157_float, var_158_float);
	@lshPlayAnimation(var_157_float, var_158_float, false);
}


void func_2883(string var_137_string, bool var_138_bool)
{
	float var_143_float; float var_144_float;
	@lshGetAnimTimes(var_137_string, var_143_float, var_144_float);
	@lshPlayAnimation(var_143_float, var_144_float, var_138_bool);
}


// @pe
void func_3397(bool var_22_bool, object var_23_object, string var_24_string)
{
	if(var_24_string == "unholster") {
		bool var_27_bool; object var_28_object;
		var_23_object = var_28_object;
		func_3612(var_28_object);
		var_27_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0xd63";
	}
	if(var_24_string == "player_shot") {
		bool var_31_bool; object var_32_object;
		var_23_object = var_32_object;
		func_3617(var_31_bool, var_32_object);
		var_31_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0xd63";
	}
	if(var_24_string == "battle") {
		bool var_48_bool; object var_49_object;
		var_23_object = var_49_object;
		func_3638(var_49_object);
		var_48_bool = var_22_bool;
		return 0;
	}
	var_22_bool = false;
}


void func_2889(object var_22_object)
{
	float var_25_float;
	var_22_object->GetEyesHeight(var_25_float);
	cvector var_26_cvector = [0.0, 0.0, 0.0];
	var_27_float = GetByIndex(var_26_cvector, 1);
	var_25_float = var_27_float;
	SetByIndex(var_26_cvector, 1) = var_27_float;
	@LookAsync(var_22_object, "head", var_26_cvector);
}


void func_843(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_979(var_17_object, var_18_bool);
}


void func_851(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_986(var_22_bool, var_23_int);
}


void func_2900(void)
{
	bool var_21_bool;
	func_3661(var_21_bool);
	if(var_21_bool != 0)
		@lshStopSpeech();
}


void func_2907(string var_57_string, int var_58_int, int var_59_int)
{
	bool var_61_bool;
	int var_63_int;
	var_58_int = var_63_int;
	int var_64_int;
	var_59_int = var_64_int;
	bool var_62_bool;
	func_3008(var_62_bool, var_63_int, var_64_int);
	if(var_62_bool != 0)
		@AddItem(var_61_bool, var_57_string, 0);
}


void func_868(object var_2_object, object var_19_object)
{
	bool var_24_bool; object var_25_object;
	func_2625(var_24_bool, var_25_object);
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
	func_3549(var_62_object);
	int var_23_int;
	var_61_int = var_23_int;
	if(var_23_int > 0) {
		if(var_23_int > 1)
			func_851(var_23_int);
		object var_69_object;
		var_19_object = var_69_object;
		func_3558(var_69_object);
		var_2_object = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_3429(object var_52_object, string var_53_string)
{
	if(var_53_string == "unholster") {
		object var_56_object;
		var_52_object = var_56_object;
		func_3615();
	} else if(var_53_string == "player_shot") {
			object var_59_object;
			var_52_object = var_59_object;
			func_3632(var_59_object);
	}
Label_3453:
	for(;;) {

	}
	
	if(!(var_53_string == "battle")) goto Label_3453;
	object var_127_object;
	var_52_object = var_127_object;
	func_3641();
}


void func_2918(string var_35_string, int var_36_int, int var_37_int, int var_38_int)
{
	int var_41_int; bool var_42_bool;
	int var_44_int;
	var_36_int = var_44_int;
	int var_45_int;
	var_37_int = var_45_int;
	bool var_43_bool;
	func_3008(var_43_bool, var_44_int, var_45_int);
	if(var_43_bool != 0) {
		@irand(var_41_int, var_38_int);
		@AddItem(var_42_bool, var_35_string, 0, (var_41_int + 1));
	}
}


// @pe
void func_2416(object var_0_object, object var_1_object, int var_26_int)
{
	if(var_26_int != 0)
		return 0;
	bool var_29_bool;
	func_2454(var_29_bool, var_1_object);
	if(!var_29_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2933(string var_44_string)
{
	bool var_53_bool; int var_54_int; bool var_55_bool; int var_56_int; bool var_57_bool; float var_58_float; cvector var_59_cvector; cvector var_60_cvector;
	@IsExisting3DSound(var_53_bool, var_44_string);
	if(!var_53_bool) { //@nz
		var_54_int = 0;

		for(;;) {
			@IsExisting3DSound(var_55_bool, (var_44_string + (var_54_int + 1)));
			if(!var_55_bool) { //@nz
				break;
			Label_2953:
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
	if(var_66_bool == 0) goto Label_2953;
}


void func_3454(bool var_19_bool, object var_20_object)
{
	bool var_22_bool;
	bool var_23_bool = false;
	bool var_24_bool; object var_25_object;
	var_20_object = var_25_object;
	func_3612(var_25_object);
	if(var_24_bool != 0) {
		bool var_26_bool; object var_27_object;
		func_2494(var_26_bool, var_27_object);
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


void func_2438(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_908(object var_0_object, object var_1_object)
{
	float var_111_float; cvector var_112_cvector; cvector var_113_cvector; bool var_114_bool; object var_115_object; bool var_116_bool;
	@rand(var_111_float, 0.5);
	@Sleep(var_111_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_920:
				@GetPosition(var_113_cvector);
				float var_120_float;
				func_967(var_120_float);
				@GetRandomPFPointInCircle(var_112_cvector, var_113_cvector, var_120_float, var_114_bool);
				if(var_114_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_920;
			}
				var_1_object = false;
		}
		}
		goto Label_936;

	Label_936:
		object var_124_object; cvector var_125_cvector;
		var_112_cvector = var_125_cvector;
		func_995(var_124_object, var_125_cvector);
		var_124_object = var_115_object;
		if(var_115_object != null) {
			@RotatePath(var_115_object, var_116_bool);
			if(var_116_bool != 0) {
				bool var_130_bool;
				func_993(var_130_bool);
				@FollowPath(var_115_object, var_130_bool, var_116_bool);
				var_115_object = null;
				if(var_116_bool != 0) {
					TaskCall(4);
					func_1165();
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
void func_3477(object var_33_object)
{
	object var_34_object;
	var_33_object = var_34_object;
	func_3615();
}


// @pe
void func_2454(bool var_29_bool, object var_30_object)
{
	object var_32_object;
	var_30_object = var_32_object;
	bool var_31_bool;
	func_2625(var_31_bool, var_32_object);
	var_31_bool = var_29_bool;
}


// @pe
void func_3483(object var_21_object)
{
	bool var_22_bool; object var_23_object;
	func_2494(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		object var_26_object;
		func_2974(var_26_object);
		@ReportReputationChange(var_23_object, var_26_object, -0.05);
	}
}


void func_2461(string var_221_string)
{
	var_221_string = "walk";
}


void func_2974(object var_106_object)
{
	object var_108_object;
	@self(var_108_object);
	var_108_object = var_106_object;
}
EMIT "Stack[-1] = 0";


void func_2463(string var_222_string)
{
	var_222_string = "run";
}


// @pe
void func_2465(string var_449_string, int var_450_int)
{
	if(var_450_int == 2) {
		var_449_string = "fire";
		return 0;
	EMIT "GOTO 0x9ad";
	}
	if(var_450_int == 1) {
		var_449_string = "bullet";
		return 0;
	}
	var_449_string = "phys";
}


void func_2980(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_59_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_59_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_59_float;
}


void func_3496(bool var_19_bool, string var_20_string)
{
	object var_22_object;
	if(var_20_string == "heal") {
		@FindActor(var_22_object, "player");
		bool var_26_bool; object var_27_object;
		var_22_object = var_27_object;
		func_3648(var_27_object);
		var_26_bool = var_19_bool;
	EMIT "Stack[-1] = 0";
	}
	var_19_bool = false;
}


void func_1450(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_2990(float var_459_float, float var_460_float, float var_461_float)
{
	if(var_460_float < var_461_float)
		var_460_float = var_459_float;
	else
		var_461_float = var_459_float;
	
}


void func_2479(cvector var_52_cvector, object var_53_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_53_object->GetPosition(var_57_cvector);
	var_52_cvector = var_57_cvector - var_56_cvector;
}


// @pe
void func_2997(float var_469_float, float var_470_float, float var_471_float, float var_472_float)
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


void func_2486(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_3512(string var_30_string)
{
	object var_32_object;
	if(var_30_string == "heal") {
		@FindActor(var_32_object, "player");
		object var_36_object;
		var_32_object = var_36_object;
		func_3651();
		var_32_object = null;
	}
}


void func_1980(bool var_508_bool, float var_509_float)
{
	float var_512_float; bool var_513_bool;
	@rand(var_512_float);
	if(var_512_float < var_509_float) {

		for(;;) {
			@IsAnimationPlaying(var_513_bool);
			if(!var_513_bool) { //@nz
			} else {
				bool var_516_bool;
				func_2078(var_516_bool);
				if(var_516_bool != 0) {
					var_508_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_508_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_2182(var_513_bool);
}


void func_2494(bool var_102_bool, object var_103_object)
{
	bool var_105_bool;
	@IsPlayerActor(var_103_object, var_105_bool);
	var_105_bool = var_102_bool;
}


void func_3008(bool var_43_bool, int var_44_int, int var_45_int)
{
	int var_47_int;
	@irand(var_47_int, var_45_int);
	var_43_bool = var_47_int < var_44_int;
}


void func_2499(bool var_53_bool, object var_54_object, string var_55_string)
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


void func_3525(string var_154_string, int var_155_int)
{
	string var_157_string = "idle";
	if(var_155_int != 0)
		var_157_string += var_155_int;
	var_157_string = var_154_string;
}


// @pe
void func_3013(float var_71_float, cvector var_72_cvector, cvector var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_71_float = (var_74_float * var_75_float) + (var_77_float * var_78_float);
}


void func_967(float var_120_float)
{
	float var_122_float;
	@GetCameraFarDistance(var_122_float);
	var_122_float = var_120_float;
}


void func_3532(int var_148_int)
{
	int var_151_int; bool var_152_bool;
	var_151_int = 0;
	
	for(;;) {
		string var_154_string; int var_155_int;
		var_151_int = var_155_int;
		func_3525(var_154_string, var_155_int);
		@HasAnimation(var_152_bool, "all", var_154_string);
		if(!var_152_bool) //@nz
			break;
		var_151_int += 1;
	}
	var_151_int = var_148_int;
}


// @pe
void func_3022(float var_80_float, cvector var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0);
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_85_float = GetByIndex(var_81_cvector, 2);
	var_86_float = GetByIndex(var_81_cvector, 2);
	var_80_float = sqrt((var_82_float * var_83_float) + (var_85_float * var_86_float));
}


void func_2511(float var_421_float, object var_422_object, float var_423_float, int var_424_int)
{
	int var_434_int; int var_436_int;
	object var_441_object;
	var_422_object = var_441_object;
	bool var_440_bool;
	func_2499(var_440_bool, var_441_object, "health");
	if(!var_440_bool) //@nz
		var_421_float = 0.0;
	bool var_444_bool; object var_445_object;
	func_2499(var_444_bool, var_445_object, "armor");
	if(!var_444_bool) //@nz
		var_434_int = 0;
	else
		var_445_object->GetProperty("armor", var_434_int);
	string var_449_string; int var_450_int;
	var_424_int = var_450_int;
	func_2465(var_449_string, var_450_int);
	string var_435_string = "armor_" + var_449_string;
	bool var_455_bool; object var_456_object; string var_457_string;
	var_422_object = var_456_object;
	func_2499(var_455_bool, var_456_object, var_457_string);
	if(!var_455_bool) //@nz
		var_436_int = 0;
	else
		var_422_object->GetProperty(var_457_string, var_436_int);

	float var_459_float;
	func_2990(var_459_float, ((var_434_int + var_436_int) / 100.0), (float)1);
	float var_437_float;
	var_459_float = var_437_float;
	float var_438_float;
	var_422_object->GetProperty("health", var_438_float);
	float var_439_float = var_423_float * (1 - var_437_float);
	float var_469_float;
	func_2997(var_469_float, (var_438_float - var_439_float), (float)0, (float)1);
	var_422_object->SetProperty("health", var_469_float);
	bool var_475_bool; object var_476_object;
	var_422_object = var_476_object;
	func_2494(var_475_bool, var_476_object);
	if(var_475_bool != 0) {
		float var_477_float = -var_439_float;
		func_3054(var_477_float);
	}
	var_439_float = var_421_float;
	
}


void func_979(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_2007(object var_0_object, bool var_309_bool, float var_310_float)
{
	bool var_316_bool; cvector var_317_cvector; cvector var_318_cvector; cvector var_319_cvector; float var_320_float;
	
	for(;;) {
		@IsAnimationPlaying(var_316_bool);
		if(!var_316_bool) //@nz
			break;
		bool var_322_bool;
		func_2078(var_322_bool);
		if(var_322_bool != 0) {
			var_309_bool = true;
			return 10;
		}
		bool var_365_bool;
		func_2625(var_365_bool, var_0_object);
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
			func_1843(var_319_cvector, var_320_float, var_370_bool, var_371_float);
			var_309_bool = true;
			return 10;
		}
		@sync();
	}
	func_2182(var_320_float);
	var_309_bool = false;
}


// @pe
void func_3032(float var_68_float, cvector var_69_cvector, cvector var_70_cvector)
{
	cvector var_72_cvector;
	var_69_cvector = var_72_cvector;
	cvector var_73_cvector;
	var_70_cvector = var_73_cvector;
	float var_71_float;
	func_3013(var_71_float, var_72_cvector, var_73_cvector);
	float var_80_float; cvector var_81_cvector;
	var_69_cvector = var_81_cvector;
	func_3022(var_80_float, var_81_cvector);
	float var_89_float; cvector var_90_cvector;
	var_70_cvector = var_90_cvector;
	func_3022(var_89_float, var_90_cvector);
	var_68_float = var_71_float / (var_80_float * var_89_float);
}


void func_986(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_476(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_509(var_21_object);
	object var_101_object;
	var_20_object = var_101_object;
	func_3694(var_101_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3549(int var_61_int)
{
	bool var_63_bool;
	func_3689(var_63_bool);
	if(var_63_bool != 0)
		var_61_int = 2;
	else
		var_61_int = 0;
	
}


void func_993(bool var_130_bool)
{
	var_130_bool = false;
}


void func_995(object var_124_object, cvector var_125_cvector)
{
	object var_127_object;
	@FindShiftedPathTo(var_127_object, var_125_cvector);
	var_127_object = var_124_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3558(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	TaskCall(5);
	func_1251(var_62_object, var_61_object);
	TaskReturn();
}


void func_3049(int var_123_int, string var_124_string)
{
	int var_126_int;
	@GetVariable(var_124_string, var_126_int);
	var_126_int = var_123_int;
}


// @pe
void func_3566(int var_30_int, object var_31_object)
{
	object var_33_object;
	var_31_object = var_33_object;
	bool var_32_bool;
	func_2625(var_32_bool, var_33_object);
	if(var_32_bool != 0)
		var_30_int = 2;
	else
		var_30_int = 0;
	
}


void func_3054(float var_477_float)
{
	object var_479_object;
	@CreateFloatVector(var_479_object);
	var_479_object->add(var_477_float);
	@SendWorldWndMessage(15, var_479_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1526(object var_74_object)
{
	object var_81_object;
	func_1540(var_77_int, var_78_bool, var_79_float, var_80_int, var_81_object, var_81_object, true, 180.0);
}


// @pe
void func_3576(object var_73_object)
{
	object var_74_object;
	var_73_object = var_74_object;
	TaskCall(6);
	func_1526(var_74_object);
	TaskReturn();
}


void func_509(object var_21_object)
{
	cvector var_32_cvector; cvector var_33_cvector; cvector var_34_cvector; cvector var_35_cvector; string var_36_string; object var_37_object; bool var_38_bool; bool var_39_bool; float var_40_float; cvector var_41_cvector;
	if(var_21_object == null) {
		func_600("fdie");
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
		func_2933(var_96_string);
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
void func_1534(float var_418_float)
{
	var_418_float = 0.03;
}


