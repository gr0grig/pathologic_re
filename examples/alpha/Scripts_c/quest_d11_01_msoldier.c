// @GLOBALS: 0:object:,1:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
		if(1 != 0) {
			func_1579();
			if(var_14_cvector == 15678) {
				object var_19_object; object var_20_object;
				var_19_object = var_1_object;
				var_20_object = var_0_object;
				func_1683();
			}
			if(var_14_cvector == 15679) {
				object var_34_object; object var_35_object;
				var_34_object = var_1_object;
				var_35_object = var_0_object;
				func_1683();
			}
			if(var_13_cvector == 15673) {
				bool var_38_bool;
				func_1705(var_1_object);
				if(var_38_bool != 0) {
					object var_46_object; object var_47_object;
					var_46_object = var_1_object;
					var_47_object = var_0_object;
					func_1699();
					func_131(var_14_cvector, "Neutral");
					var_0_object->SetMessage(14445); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14446, 15675, 15674); //@t
					var_0_object->AddReply(14456, 15687, 15686); //@t
					return 0;
				}
			}
			if(var_13_cvector == 15687) {
				func_131(var_14_cvector, "Neutral");
				var_0_object->SetMessage(14457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14458, 15689, 15688); //@t
				return 0;
			}
			if(var_13_cvector == 15689) {
				func_131(var_14_cvector, "Neutral");
				var_0_object->SetMessage(14459); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14460, 15681, 15690); //@t
				return 0;
			}
			if(var_13_cvector == 15675) {
				func_131(var_14_cvector, "Neutral");
				var_0_object->SetMessage(14447); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14448, 15677, 15676); //@t
				var_0_object->AddReply(14452, 15681, 15680); //@t
				return 0;
			}
			if(var_13_cvector == 15681) {
				func_131(var_14_cvector, "Neutral");
				var_0_object->SetMessage(14453); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14454, 15677, 15682); //@t
				var_0_object->AddReply(14455, 15677, 15684); //@t
				return 0;
			}
			if(var_13_cvector == 15677) {
				func_131(var_14_cvector, "Neutral");
				var_0_object->SetMessage(14449); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14450, -1, 15678); //@t
				var_0_object->AddReply(14451, -1, 15679); //@t
				return 0;
			}
			var_3_string = true;
			bool var_116_bool;
			func_1989(var_116_bool);
			if(var_116_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x94";
	
	}

}


task task_2
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
		bool var_15_bool;
		@IsOverrideActive(var_15_bool);
		if(!var_15_bool) //@nz
			@WorkWithCorpse(var_13_cvector);
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, bool var_14_bool, cvector var_15_cvector, cvector var_16_cvector)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
	}

}


task task_3
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
		func_491();
		object var_15_object;
		var_13_cvector = var_15_object;
		func_1835();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
		if(var_13_cvector == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
		if(var_13_cvector == actor) {
			@SetTimer(100, 3.0);
			func_1483(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector, object var_48_object)
		{
		object var_50_object;
		var_48_object = var_50_object;
			bool var_49_bool;
		func_1392(var_49_bool, var_50_object);
		if(!var_49_bool) { //@nz
			object var_78_object;
			var_48_object = var_78_object;
			func_1859(var_78_object);
		}
		func_491();
		object var_86_object;
		var_48_object = var_86_object;
		func_1872(var_86_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
		object var_16_object;
		var_13_cvector = var_16_object;
		object var_17_object;
		var_14_cvector = var_17_object;
		bool var_15_bool;
		func_1945(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			object var_48_object;
			var_13_cvector = var_48_object;
			func_529();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
		object var_15_object;
		var_13_cvector = var_15_object;
		bool var_14_bool;
		func_1917(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_491();
			object var_60_object;
			var_13_cvector = var_60_object;
			func_1939(var_60_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
		if(var_13_cvector != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_4
{
	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector, object var_48_object)
		{
		object var_50_object;
		var_48_object = var_50_object;
			bool var_49_bool;
		func_1392(var_49_bool, var_50_object);
		if(!var_49_bool) { //@nz
			object var_78_object;
			var_48_object = var_78_object;
			func_1859(var_78_object);
		}
		func_725();
		object var_85_object;
		var_48_object = var_85_object;
		func_1872(var_85_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
		object var_16_object;
		var_13_cvector = var_16_object;
		object var_17_object;
		var_14_cvector = var_17_object;
		bool var_15_bool;
		func_1945(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			object var_48_object;
			var_13_cvector = var_48_object;
			func_693();
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
		func_725();
		object var_14_object;
		var_13_cvector = var_14_object;
		func_1835();
	}

}


task task_5
{
	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, cvector var_13_cvector)
	{
		bool var_14_bool = false;
		if(var_2_object != 0) {
			if(var_13_cvector == actor)
				var_14_bool = true;
		}
		if(var_14_bool != 0)
			func_1483(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, cvector var_13_cvector)
	{
		bool var_14_bool = false;
		if(var_2_object != 0) {
			if(var_13_cvector == actor)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, cvector var_14_cvector, object var_48_object)
		{
		object var_50_object;
		var_48_object = var_50_object;
			bool var_49_bool;
		func_1392(var_49_bool, var_50_object);
		if(!var_49_bool) //@nz
			return 0;
		object var_78_object;
		var_48_object = var_78_object;
		func_1859(var_78_object);
		if(var_48_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_48_object;
			if(var_2_object == 0) goto Label_1023;
			@StopAnimation();
			@StopGroup0();
		}
	Label_1023:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, cvector var_14_cvector)
	{
		object var_16_object;
		var_13_cvector = var_16_object;
		object var_17_object;
		var_14_cvector = var_17_object;
		bool var_15_bool;
		func_1945(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			object var_48_object;
			var_13_cvector = var_48_object;
			func_1000();
		}
	}

}


maintask task_6
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, cvector var_13_cvector)
	{
		object var_15_object;
		var_13_cvector = var_15_object;
		TaskCall(0);
		int var_14_int;
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, cvector var_13_cvector)
	{
		bool var_14_bool;
		func_1671(var_14_bool, "quest_d11_01", "soldier_attack");
		object var_20_object;
		object var_21_object;
		func_1268(var_21_object);
		var_21_object = var_20_object;
		TaskCall(7);
		func_1064(var_20_object);
		TaskReturn();
	}

}


task task_7
{
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, object var_13_object)
	{
		bool var_15_bool;
		object var_17_object;
		var_13_object = var_17_object;
		bool var_16_bool;
		func_1392(var_16_bool, var_17_object);
		if(!var_16_bool) //@nz
			return 2;
		bool var_51_bool; object var_52_object;
		func_1912(var_51_bool, var_52_object);
		if(!var_51_bool) { //@nz
			var_56_object = GlobalVars[0];
			var_56_object->in(var_15_bool, var_52_object);
			if(!var_15_bool) //@nz
				return 2;
		}
		func_1240();
		object var_58_object;
		var_13_object = var_58_object;
		TaskCall(3);
		func_467(var_59_object, var_58_object);
		TaskReturn();
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, object var_13_object, object var_14_object, object var_48_object)
		{
		object var_50_object;
		var_48_object = var_50_object;
			bool var_49_bool;
		func_1392(var_49_bool, var_50_object);
		if(!var_49_bool) { //@nz
			object var_78_object;
			var_48_object = var_78_object;
			func_1859(var_78_object);
		}
		func_1240();
		object var_85_object;
		var_48_object = var_85_object;
		func_1872(var_85_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, object var_13_object, object var_14_object)
	{
		object var_16_object;
		var_13_object = var_16_object;
		object var_17_object;
		var_14_object = var_17_object;
		bool var_15_bool;
		func_1945(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			object var_48_object;
			var_13_object = var_48_object;
			func_1116();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, object var_13_object)
	{
		object var_15_object;
		var_13_object = var_15_object;
		bool var_14_bool;
		func_1917(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_1240();
			object var_59_object;
			var_13_object = var_59_object;
			func_1991(var_59_object);
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, object var_13_object, int var_14_int, float var_15_float, float var_16_float)
{
	object var_17_object;
	var_13_object = var_17_object;
	int var_18_int;
	var_14_int = var_18_int;
	float var_19_float;
	var_15_float = var_19_float;
	func_1416(var_18_int, var_19_float);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, object var_13_object, string var_14_string)
{
	float var_16_float;
	if(var_14_string == "health") {
		@GetProperty("health", var_16_float);
		if(var_16_float <= 0)
			@SignalDeath(var_13_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_1997(var_14_object);
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_1501(var_25_bool, var_26_object);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_66_int;
	func_1985(var_66_int);
	var_21_object->SetNPCName(var_66_int);
	string var_67_string;
	func_1987(var_67_string);
	var_21_object->SetPhoto(var_67_string);
	int var_68_int;
	func_1717(var_68_int);
	var_21_object->SetPlayerName(var_68_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_77_object; object var_78_object;
	var_15_object = var_77_object;
	var_21_object = var_78_object;
	TaskCall(1);
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_126_bool = !var_24_bool; //@nz
		if(var_126_bool == 0) goto Label_52;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_52:
	object var_127_object;
	var_15_object = var_127_object;
	func_1557();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_1666(int var_86_int, string var_87_string)
{
	int var_89_int;
	@GetVariable(var_87_string, var_89_int);
	var_89_int = var_86_int;
}


// @pe
void func_131(object var_2_object, string var_96_string)
{
	bool var_97_bool;
	func_1989(var_97_bool);
	if(!var_97_bool) //@nz
		return 0;
	if(var_96_string == var_2_object)
		return 0;
	string var_100_string;
	func_1561(var_100_string);
	var_2_object = var_100_string;
}


void func_1287(float var_150_float, object var_151_object, float var_152_float, int var_153_int)
{
	int var_160_int; int var_162_int;
	object var_167_object;
	var_151_object = var_167_object;
	bool var_166_bool;
	func_1275(var_166_bool, var_167_object, "health");
	if(!var_166_bool) //@nz
		var_150_float = 0.0;
	bool var_170_bool; object var_171_object;
	func_1275(var_170_bool, var_171_object, "armor");
	if(!var_170_bool) //@nz
		var_160_int = 0;
	else
		var_171_object->GetProperty("armor", var_160_int);
	string var_175_string; int var_176_int;
	var_153_int = var_176_int;
	func_1245(var_175_string, var_176_int);
	string var_161_string = "armor_" + var_175_string;
	bool var_179_bool; object var_180_object; string var_181_string;
	var_151_object = var_180_object;
	func_1275(var_179_bool, var_180_object, var_181_string);
	if(!var_179_bool) //@nz
		var_162_int = 0;
	else
		var_151_object->GetProperty(var_181_string, var_162_int);

	float var_183_float;
	func_1606(var_183_float, ((var_160_int + var_162_int) / 100.0), (float)1);
	float var_163_float;
	var_183_float = var_163_float;
	float var_164_float;
	var_151_object->GetProperty("health", var_164_float);
	float var_193_float;
	func_1613(var_193_float, (var_164_float - (var_152_float * (1 - var_163_float))), (float)0, (float)1);
	var_151_object->SetProperty("health", var_193_float);
	float var_165_float = var_150_float;
	
}


void func_1671(bool var_14_bool, string var_15_string, string var_16_string)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(var_18_object == null)
		var_14_bool = false;
	@Trigger(var_18_object, var_16_string);
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";


void func_905(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_1162(object var_0_object, object var_1_object)
{
	int var_262_int; bool var_263_bool; cvector var_264_cvector; object var_265_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		@irand(var_262_int, 60);
		@Sleep((var_262_int + 30), var_263_bool);
		if(var_263_bool != 0) {
			func_1085();
		} else {
		for(;;) {
			@GetPFPosition(var_264_cvector);
			float var_270_float; cvector var_272_cvector;
			var_264_cvector = var_272_cvector;
			func_1602(var_270_float, var_1_object, var_272_cvector);
			if(var_270_float > 40000) {
				@FindPathTo(var_265_object, var_1_object);
				if(var_265_object != null) {
					@RotatePath(var_265_object, var_263_bool);
					if(!var_263_bool) { //@nz
					} else {
					@FollowPath(var_265_object, false, var_263_bool);
					if(!var_263_bool) { //@nz
						goto Label_1237;
					}
					var_281_float = GetByIndex(var_0_object, 0);
					var_282_float = GetByIndex(var_0_object, 2);
					@Rotate(var_281_float, var_282_float, var_263_bool);
					if(!var_263_bool) { //@nz
						goto Label_1237;
					}
					@WaitForAnimEnd(var_263_bool);
					if(!var_263_bool) { //@nz
						goto Label_1237;
					}
					goto Label_1238;
				EMIT "GOTO 0x4c6";
				}
				@Sleep(1);
				var_265_object = null;
				goto Label_1237;
			}
			var_286_float = GetByIndex(var_0_object, 0);
			var_287_float = GetByIndex(var_0_object, 2);
			@Rotate(var_286_float, var_287_float, var_263_bool);
			if(!var_263_bool) { //@nz
				goto Label_1237;
			}
			@WaitForAnimEnd(var_263_bool);
			if(!var_263_bool) { //@nz
				goto Label_1237;
			}
			goto Label_1238;
			}
		Label_1237:
		}
		}
	Label_1238:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1801(int var_50_int, string var_51_string)
{
	int var_53_int;
	@GetInvItemByName(var_53_int, var_51_string);
	var_53_int = var_50_int;
}


void func_1416(object var_17_object, int var_18_int)
{
	object var_30_object; object var_31_object; cvector var_32_cvector; float var_33_float; string var_39_string;
	bool var_40_bool = false;
	if(var_18_int != 4) {
		if(var_18_int != 5)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		@GetScene(var_30_object);
		@GetPosition(var_32_cvector);
		@GetEyesHeight(var_33_float);
		var_45_float = GetByIndex(var_32_cvector, 1);
		SetByIndex(var_32_cvector, 1) = (var_45_float + (var_33_float / 2));
		@AddActorByType(var_31_object, "scripted", var_30_object, var_32_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_31_object = null;
		var_30_object = null;
	}
	if(var_17_object == null)
		return 20;
	int var_34_int;
	@GetSecondaryAnimationType(var_34_int);
	if(var_34_int < 0)
		return 20;
	cvector var_35_cvector;
	var_17_object->GetPosition(var_35_cvector);
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_38_cvector = var_36_cvector - var_35_cvector;
	var_54_float = GetByIndex(var_38_cvector, 0);
	var_55_float = GetByIndex(var_37_cvector, 0);
	var_57_float = GetByIndex(var_38_cvector, 2);
	var_58_float = GetByIndex(var_37_cvector, 2);
	if(((var_54_float * var_55_float) + (var_57_float * var_58_float)) >= 0)
		var_39_string = "fhit";
	else
		var_39_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_39_string + "1"), (var_39_string + "2"), -10);
	
}


void func_910(object var_0_object)
{
	float var_100_float; object var_101_object; object var_102_object;
	@ReportAttack(var_0_object);
	cvector var_94_cvector;
	@GetDirection(var_94_cvector);
	cvector var_103_cvector;
	func_1253(var_103_cvector, var_0_object);
	cvector var_95_cvector;
	var_103_cvector = var_95_cvector;
	float var_109_float; cvector var_110_cvector; cvector var_111_cvector;
	var_95_cvector = var_111_cvector;
	func_1649(var_109_float, var_110_cvector, var_111_cvector);
	if(var_109_float < 0.9659258) {
	}
	@PlayAnimation("all", "attack_begin1");
	@WaitForAnimEnd();
	@Speak("shot");
	@GetDirection(var_110_cvector);
	cvector var_138_cvector;
	func_1253(var_138_cvector, var_0_object);
	var_138_cvector = var_95_cvector;
	var_140_float = GetByIndex(var_95_cvector, 1);
	float var_141_float;
	func_1494(var_141_float, var_0_object);
	SetByIndex(var_95_cvector, 1) = (var_140_float + var_141_float);
	cvector var_96_cvector;
	@RandVecCone3D(var_96_cvector, var_95_cvector, 0.2617994);
	object var_97_object;
	int var_98_int;
	cvector var_99_cvector;
	@GetVictimMaterial(var_96_cvector, var_97_object, var_98_int, var_99_cvector);
	if(var_97_object != null) {
		if(var_97_object == var_0_object) {
			float var_150_float;
			func_1287(var_150_float, var_0_object, 1.5, 0);
			var_150_float = var_100_float;
			@ReportHit(var_0_object, 2, var_100_float, 1.5);
		} else if(var_98_int != -1) {
			@GetScene(var_101_object);
			@AddActorByType(var_102_object, "scripted", var_101_object, var_99_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_102_object->SetScriptProperty("Material", var_98_int);
			var_102_object = null;
			var_101_object = null;
		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


// @pe
void func_1806(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	TaskCall(2);
	func_320(var_21_object);
	TaskReturn();
}


// @pe
void func_1683(void)
{
	@SetVariable("d11q01", 3);
	bool var_23_bool;
	func_1671(var_23_bool, "quest_d11_01", "soldier_attack");
	bool var_29_bool;
	func_1671(var_29_bool, "quest_d11_01", "restore_andrei");
}


// @pe
void func_1939(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	func_1991(var_61_object);
}


// @pe
void func_1557(void)
{
	@CameraSwitchToNormal();
}


void func_1561(string var_100_string)
{
	@Trace("playing " + var_100_string);
	float var_103_float;
	float var_104_float;
	@lshGetAnimTimes(var_100_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float);
	@Trace("start: " + var_103_float);
	@Trace("end: " + var_104_float);
}


void func_1945(bool var_15_bool, object var_16_object, object var_17_object)
{
	object var_23_object;
	var_17_object = var_23_object;
	bool var_22_bool;
	func_1275(var_22_bool, var_23_object, "reputation");
	if(!var_22_bool) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_20_float;
	var_17_object->GetProperty("reputation", var_20_float);
	if(var_20_float < 0.5) {
		var_15_bool = false;
		return 4;
	}
	bool var_21_bool;
	@CanSee(var_21_bool, var_16_object);
	bool var_35_bool = true;
	if(var_21_bool != 1) {
		float var_37_float; object var_38_object;
		func_1260(var_37_float, var_38_object);
		var_46_bool = var_37_float <= 160000.0;
		if(var_46_bool != 1)
			var_35_bool = false;
	}
	if(var_35_bool != 0) {
		@ReportReputationChange(var_38_object, var_17_object, -0.2);
		var_15_bool = true;
		return 4;
	}
	var_15_bool = false;
}


// @pe
void func_1699(void)
{
	@SetVariable("ood11Officer1", 1);
}


// @pe
void func_1064(object var_20_object)
{
	func_1841();
	object var_31_object;
	var_20_object = var_31_object;
	func_1116();
	
	for(;;) {
		func_1077();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1705(bool var_84_bool)
{
	int var_86_int;
	func_1666(var_86_int, "ood11Officer1");
	if(var_86_int == 0) {
		var_84_bool = true;
		return 0;
	}
	var_84_bool = false;
}


void func_1579(void)
{
	bool var_16_bool;
	func_1989(var_16_bool);
	if(var_16_bool != 0)
		@lshStopSpeech();
}


void func_1841(void)
{
	var_27_object = GlobalVars[0];
	object var_28_object;
	func_1624(var_28_object);
	var_28_object = var_27_object;
	GlobalVars[0] = var_27_object;
}


void func_1586(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_1717(int var_68_int)
{
	int var_70_int;
	@GetVariable("player", var_70_int);
	if(var_70_int == 0) {
		var_68_int = 200001;
		return 2;
	EMIT "GOTO 0x6c4";
	}
	if(var_70_int == 1) {
		var_68_int = 200002;
		return 2;
	}
	var_68_int = 200003;
}


void func_1077(void)
{
	func_1841();
	
	for(;;) {
		func_1162(var_26_cvector, var_20_object);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_439(string var_85_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_85_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_85_string);
	@RemoveEnvelope();
}


// @pe
void func_1848(object var_65_object, bool var_66_bool)
{
	object var_67_object;
	var_65_object = var_67_object;
	bool var_68_bool;
	var_66_bool = var_68_bool;
	TaskCall(5);
	func_741(var_69_object, var_70_object, var_71_bool, var_67_object, var_68_bool);
	TaskReturn();
	@ResetAAS();
}


void func_1592(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_54_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_54_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_54_float;
}


void func_1085(void)
{
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_77_object, object var_78_object)
{
	var_0_object = var_78_object;
	var_1_object = var_77_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_84_bool;
		func_1705(var_1_object);
		if(var_84_bool != 0) {
			object var_92_object; object var_93_object;
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_1699();
			func_131(var_78_object, "Neutral");
			var_0_object->SetMessage(14445); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14446, 15675, 15674); //@t
			var_0_object->AddReply(14456, 15687, 15686); //@t
		} else {
				return 0;
		}
	}
	bool var_118_bool;
	func_1989(var_118_bool);
	if(var_118_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1561(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_130;
			}
			@PlayAnimation("all", "idle");
		}

	}
	Label_130:
		return 0;

	}
	
}
EMIT "GOTO 0x43";


// @pe
void func_320(object var_21_object)
{
	func_1764();
	object var_62_object;
	var_21_object = var_62_object;
	func_329(var_62_object);
}


void func_1985(int var_66_int)
{
	var_66_int = 14841;
}


void func_1602(float var_270_float, cvector var_271_cvector, cvector var_272_cvector)
{
	var_270_float = (var_272_cvector - var_271_cvector) | (var_272_cvector - var_271_cvector);
}


void func_1987(string var_67_string)
{
	var_67_string = "ui/NPC_Black.png";
}


void func_1859(object var_78_object)
{
	if(var_78_object == null) {
	}
	var_82_object = GlobalVars[0];
	bool var_80_bool;
	var_82_object->in(var_80_bool, var_78_object);
	if(!var_80_bool) { //@nz
		var_84_object = GlobalVars[0];
		var_84_object->add(var_78_object);
	}
}


void func_1989(bool var_97_bool)
{
	var_97_bool = false;
}


// @pe
void func_1606(float var_183_float, float var_184_float, float var_185_float)
{
	if(var_184_float < var_185_float)
		var_184_float = var_183_float;
	else
		var_185_float = var_183_float;
	
}


// @pe
void func_1991(object var_59_object)
{
	object var_60_object;
	var_59_object = var_60_object;
	func_1883(var_60_object);
}


void func_1351(bool var_33_bool, object var_34_object)
{
	bool var_36_bool;
	var_34_object->IsDead(var_36_bool);
	var_36_bool = var_33_bool;
}


// @pe
void func_329(object var_62_object)
{
	object var_63_object;
	var_62_object = var_63_object;
	func_352(var_63_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1734(int var_27_int, int var_28_int)
{
	int var_34_int;
	if(var_27_int > var_28_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_33_int = 0;
	if(var_27_int != var_28_int) {
		@irand(var_34_int, (var_28_int - var_27_int));
	} else if(var_27_int == 0) {
		return 8;
	}
	var_33_int += var_27_int;
	if(var_33_int == 0)
		return 8;
	int var_35_int;
	@GetInvItemByName(var_35_int, "Money");
	bool var_36_bool;
	@AddItem(var_36_bool, var_35_int, 0, var_33_int);
	
}


void func_1483(object var_214_object)
{
	cvector var_218_cvector;
	var_214_object->GetPosition(var_218_cvector);
	cvector var_219_cvector;
	@GetPosition(var_219_cvector);
	cvector var_220_cvector = var_218_cvector - var_219_cvector;
	var_221_float = GetByIndex(var_220_cvector, 0);
	var_222_float = GetByIndex(var_220_cvector, 2);
	@RotateAsync(var_221_float, var_222_float);
}


void func_1356(bool var_22_bool, object var_23_object)
{
	if(var_23_object == null) {
		var_22_bool = false;
		return 4;
	}
	bool var_29_bool = false;
	var_32_bool = IsFuncExist(var_23_object, "IsDead", 1);
	if(var_32_bool != 0) {
		bool var_33_bool; object var_34_object;
		var_23_object = var_34_object;
		func_1351(var_33_bool, var_34_object);
		if(var_33_bool != 0)
			var_29_bool = true;
	}
	if(var_29_bool != 0) {
		var_22_bool = false;
		return 4;
	}
	object var_26_object;
	@GetScene(var_26_object);
	if(var_26_object == null) {
		var_22_bool = false;
		return 4;
	}
	object var_27_object;
	var_23_object->GetScene(var_27_object);
	if(var_26_object != var_27_object) {
		var_22_bool = false;
		return 4;
	}
	var_22_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1613(float var_193_float, float var_194_float, float var_195_float, float var_196_float)
{
	if(var_194_float < var_195_float) {
		var_195_float = var_193_float;
		return 0;
	}
	if(var_194_float > var_196_float) {
		var_196_float = var_193_float;
		return 0;
	}
	var_194_float = var_193_float;
}


void func_1997(object var_14_object)
{
	object var_16_object;
	@GetScene(var_16_object);
	object var_17_object;
	func_1586(var_17_object);
	var_16_object->RemoveStationaryActor(var_17_object);
	object var_20_object;
	var_14_object = var_20_object;
	func_1806(var_20_object);
}
EMIT "Stack[-1] = 0";


void func_586(object var_0_object, object var_1_object, object var_247_object)
{
	var_0_object = var_247_object;
	@CanSee(var_1_object, var_0_object);
	if(var_1_object != 0) {
		bool var_257_bool;
		func_1904(var_257_bool, var_0_object);
		if(var_257_bool != 0) {
			func_1848(var_0_object, true);
			return 6;
		}
		@Face(var_0_object);
	}
	@PlayAnimation("all", "shoot_begin");
	bool var_253_bool;
	@WaitForAnimEnd(var_253_bool);
	if(!var_253_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@Speak("shot");
	@PlayAnimation("all", "shoot_end");
	@WaitForAnimEnd(var_253_bool);
	if(!var_253_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@LockAnimationEnd("all", "attack_on");
	int var_254_int = 0;
	int var_255_int = 0;
	
	for(;;) {
		if(var_255_int < 20) {
			@Sleep(0.5, var_253_bool);
			if(!var_253_bool) //@nz
				return 6;
			@CanSee(var_1_object, var_0_object);
			if(var_1_object != 0) {
				var_254_int = 0;
				bool var_284_bool;
				func_1904(var_284_bool, var_0_object);
				if(var_284_bool != 0) {
					func_725();
					func_1848(var_0_object, false);
					return 6;
				}
				@Face(var_0_object);
			} else {
			@StopAsync();
			if(!((var_254_int + 1) == 4)) goto Label_681;
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
			return 6;
		}
		func_725();
		object var_294_object;
		var_247_object = var_294_object;
		func_1848(var_294_object, false);
		return 6;
		}
	Label_681:
		var_255_int += 1;
	}
	
}


// @pe
void func_1872(object var_85_object)
{
	object var_86_object;
	var_85_object = var_86_object;
	func_1859(var_86_object);
	object var_87_object;
	var_85_object = var_87_object;
	func_1848(var_87_object, true);
}


void func_467(object var_0_object, object var_58_object)
{
	bool var_61_bool;
	@Face(var_58_object);
	
	for(;;) {
		@Sleep(0.5, var_61_bool);
		bool var_63_bool = true;
		var_64_bool = !var_61_bool; //@nz
		if(var_64_bool != 1) {
			bool var_65_bool;
			func_1392(var_65_bool, var_58_object);
			var_67_bool = !var_65_bool; //@nz
			if(var_67_bool != 1)
				var_63_bool = false;
		}
		if(var_63_bool != 0)
			break;
	}
	@StopAsync();
}


void func_725(void)
{
	@StopAsync();
	@StopGroup0();
	@Stop();
}


void func_1494(float var_141_float, object var_142_object)
{
	float var_145_float;
	@GetEyesHeight(var_145_float);
	float var_146_float;
	var_142_object->GetEyesHeight(var_146_float);
	var_141_float = var_146_float - var_145_float;
}


void func_1240(void)
{
	@StopGroup0();
	@Stop();
}


void func_1624(object var_28_object)
{
	object var_30_object;
	@CreateObjectSet(var_30_object);
	var_30_object = var_28_object;
}
EMIT "Stack[-1] = 0";


void func_1883(object var_60_object)
{
	var_63_object = GlobalVars[0];
	bool var_62_bool;
	var_63_object->in(var_62_bool, var_60_object);
	if(var_62_bool != 0) {
		object var_65_object;
		var_60_object = var_65_object;
		func_1848(var_65_object, true);
	} else {
		object var_247_object;
		var_60_object = var_247_object;
		TaskCall(4);
		func_586(var_248_object, var_249_bool, var_247_object);
		TaskReturn();
		@ResetAAS();
	}
	
}


void func_1501(bool var_25_bool, object var_26_object)
{
	cvector var_36_cvector;
	var_26_object->GetPosition(var_36_cvector);
	float var_35_float;
	var_26_object->GetEyesHeight(var_35_float);
	var_43_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (var_43_float + var_35_float);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	@GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_44_float + var_35_float);
	cvector var_38_cvector = var_36_cvector - var_37_cvector;
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_47_float = sqrt(var_38_cvector | var_38_cvector);
	var_38_cvector /= var_47_float;
	cvector var_39_cvector = -var_38_cvector;
	cvector var_50_cvector;
	func_1592(var_50_cvector, (var_39_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_40_cvector = ((var_38_cvector * 70) + (var_50_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_37_cvector + var_40_cvector), var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	@Rotate(var_63_float, var_64_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
}


// @pe
void func_1245(string var_175_string, int var_176_int)
{
	if(var_176_int == 1)
		var_175_string = "fire";
	var_175_string = "phys";
}


// @pe
void func_1630(float var_112_float, cvector var_113_cvector, cvector var_114_cvector)
{
	var_115_float = GetByIndex(var_113_cvector, 0);
	var_116_float = GetByIndex(var_114_cvector, 0);
	var_118_float = GetByIndex(var_113_cvector, 2);
	var_119_float = GetByIndex(var_114_cvector, 2);
	var_112_float = (var_115_float * var_116_float) + (var_118_float * var_119_float);
}


void func_352(object var_63_object)
{
	cvector var_74_cvector; cvector var_75_cvector; cvector var_76_cvector; cvector var_77_cvector; string var_78_string; object var_79_object; bool var_80_bool; bool var_81_bool; float var_82_float; cvector var_83_cvector;
	if(var_63_object == null) {
		func_439("fdie");
	} else {
		var_63_object->GetPosition(var_74_cvector);
		@GetPosition(var_75_cvector);
		@GetDirection(var_76_cvector);
		var_77_cvector = var_75_cvector - var_74_cvector;
		var_88_float = GetByIndex(var_77_cvector, 0);
		var_89_float = GetByIndex(var_76_cvector, 0);
		var_91_float = GetByIndex(var_77_cvector, 2);
		var_92_float = GetByIndex(var_76_cvector, 2);
		if(((var_88_float * var_89_float) + (var_91_float * var_92_float)) >= 0)
			var_78_string = "fdie";
		else
			var_78_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_63_object = var_79_object;
		var_99_bool = IsFuncExist(var_63_object, "GetScriptProperty", 2);
		if(var_99_bool != 0) {
			var_63_object->HasScriptProperty(var_80_bool, "Owner");
			if(var_80_bool != 0) {
				var_63_object->GetScriptProperty(var_79_object, "Owner");
				if(var_79_object == null)
					var_63_object = var_79_object;
			}
		}
		var_106_bool = IsFuncExist(var_79_object, "@GetEyesHeight", 1);
		if(var_106_bool != 0) {
			var_79_object->GetEyesHeight(var_82_float);
			var_83_cvector = [0.0, 0.0, 0.0];
			var_107_float = GetByIndex(var_83_cvector, 1);
			var_82_float = var_107_float;
			SetByIndex(var_83_cvector, 1) = var_107_float;
			@LookAsync(var_63_object, "head", var_83_cvector);
			var_81_bool = true;
		} else {
			var_81_bool = false;

		}
		@PlayAnimation("all", var_78_string);
		@WaitForAnimEnd();
		if(var_81_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_78_string);
		@RemoveEnvelope();
		var_79_object = null;
	}
	
}


void func_1764(void)
{
	bool var_25_bool;
	@ClearSubContainer(0);
	func_1734(500, 1000);
	int var_24_int;
	@irand(var_24_int, 4);
	if(var_24_int != 0) {
		int var_50_int;
		func_1801(var_50_int, "rifle_ammo");
		@AddItem(var_25_bool, var_50_int, 0, var_24_int);
	}
	@irand(var_24_int, 3);
	if(var_24_int == 0) {
		int var_58_int;
		func_1801(var_58_int, "rusk");
		@AddItem(var_25_bool, var_58_int, 0, 1);
	}
}


void func_1253(cvector var_103_cvector, object var_104_object)
{
	cvector var_107_cvector;
	@GetPosition(var_107_cvector);
	cvector var_108_cvector;
	var_104_object->GetPosition(var_108_cvector);
	var_103_cvector = var_108_cvector - var_107_cvector;
}


void func_741(object var_0_object, object var_1_object, object var_2_object, object var_67_object, bool var_68_bool)
{
	bool var_74_bool; bool var_75_bool;
	var_0_object = var_67_object;
	@Face(var_0_object);
	if(var_68_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_760:
	for(;;) {
		bool var_82_bool;
		func_1392(var_82_bool, var_0_object);
		if(var_82_bool != 0) {
			@CanSee(var_75_bool, var_0_object);
			if(var_75_bool != 0) {
				func_910(var_75_bool);
			} else {
				func_1483(var_0_object);
				var_2_object = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_74_bool);
				if(!var_74_bool) { //@nz
					if(var_1_object != null)
						func_905(var_74_bool, var_75_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_760;
				}
				bool var_229_bool;
				func_1392(var_229_bool, var_0_object);
				if(!var_229_bool) { //@nz
				} else {
						@CanSee(var_75_bool, var_0_object);
						if(var_75_bool != 0) {
							var_2_object = false;
							@Face(var_0_object);
							func_910(var_75_bool);
							goto Label_852;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_74_bool);
						if(!var_74_bool) { //@nz
							if(var_1_object != null)
								func_905(var_74_bool, var_75_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_760;
						}
						bool var_243_bool;
						func_1392(var_243_bool, var_0_object);
						var_245_bool = !var_243_bool; //@nz
						if(var_245_bool == 0) goto Label_840;
				}
		}
		Label_862:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_840:
			var_2_object = false;
			@CanSee(var_75_bool, var_0_object);
			if(var_75_bool != 0) {
				@Face(var_0_object);
				func_910(var_75_bool);
				goto Label_852;
			}
			goto Label_862;
		}
	Label_852:
		if(var_1_object != null)
			func_905(var_74_bool, var_75_bool);
		else
			@Sleep(2);

	}
	
}


// @pe
void func_1639(float var_121_float, cvector var_122_cvector)
{
	var_123_float = GetByIndex(var_122_cvector, 0);
	var_124_float = GetByIndex(var_122_cvector, 0);
	var_126_float = GetByIndex(var_122_cvector, 2);
	var_127_float = GetByIndex(var_122_cvector, 2);
	var_121_float = sqrt((var_123_float * var_124_float) + (var_126_float * var_127_float));
}


void func_491(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_1260(float var_259_float, object var_260_object)
{
	cvector var_264_cvector;
	@GetPosition(var_264_cvector);
	cvector var_265_cvector;
	var_260_object->GetPosition(var_265_cvector);
	var_259_float = (var_265_cvector - var_264_cvector) | (var_265_cvector - var_264_cvector);
}


void func_1392(bool var_18_bool, object var_19_object)
{
	object var_23_object;
	var_19_object = var_23_object;
	bool var_22_bool;
	func_1356(var_22_bool, var_23_object);
	if(!var_22_bool) { //@nz
		var_18_bool = false;
		return 2;
	}
	bool var_40_bool; object var_41_object;
	func_1275(var_40_bool, var_41_object, "noaccess");
	if(!var_40_bool) { //@nz
		var_18_bool = true;
		return 2;
	}
	int var_21_int;
	var_41_object->GetProperty("noaccess", var_21_int);
	var_18_bool = var_21_int == 0;
}


// @pe
void func_1904(bool var_257_bool, object var_258_object)
{
	object var_260_object;
	var_258_object = var_260_object;
	float var_259_float;
	func_1260(var_259_float, var_260_object);
	var_257_bool = var_259_float <= 40000.0;
}


// @pe
void func_1649(float var_109_float, cvector var_110_cvector, cvector var_111_cvector)
{
	cvector var_113_cvector;
	var_110_cvector = var_113_cvector;
	cvector var_114_cvector;
	var_111_cvector = var_114_cvector;
	float var_112_float;
	func_1630(var_112_float, var_113_cvector, var_114_cvector);
	float var_121_float; cvector var_122_cvector;
	var_110_cvector = var_122_cvector;
	func_1639(var_121_float, var_122_cvector);
	float var_130_float; cvector var_131_cvector;
	var_111_cvector = var_131_cvector;
	func_1639(var_130_float, var_131_cvector);
	var_109_float = var_112_float / (var_121_float * var_130_float);
}


void func_1268(object var_21_object)
{
	object var_23_object;
	@FindActor(var_23_object, "player");
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


void func_1912(bool var_55_bool, object var_56_object)
{
	bool var_58_bool;
	@IsPlayerActor(var_56_object, var_58_bool);
	var_58_bool = var_55_bool;
}


void func_1275(bool var_40_bool, object var_41_object, string var_42_string)
{
	var_47_bool = IsFuncExist(var_41_object, "HasProperty", 2);
	if(!var_47_bool) { //@nz
		var_40_bool = false;
		return 2;
	}
	bool var_44_bool;
	var_41_object->HasProperty(var_42_string, var_44_bool);
	var_44_bool = var_40_bool;
}


void func_1917(bool var_14_bool, object var_15_object)
{
	bool var_18_bool; object var_19_object;
	func_1392(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_14_bool = false;
		return 2;
	}
	var_53_object = GlobalVars[0];
	bool var_17_bool;
	var_53_object->in(var_17_bool, var_19_object);
	if(var_17_bool != 0) {
		var_14_bool = true;
		return 2;
	}
	bool var_55_bool; object var_56_object;
	var_15_object = var_56_object;
	func_1912(var_55_bool, var_56_object);
	var_55_bool = var_14_bool;
}


