// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1761(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			object var_12_object;
			var_5_object = var_12_object;
			func_1764();
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		func_1832();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		@SensePlayerOnly(true);
		func_1796();
		func_171();
	
		for(;;) {
			var_2_bool = false;
			func_432(var_3_bool, var_4_object);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1761(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_367(var_7_int);
			object var_15_object;
			var_5_object = var_15_object;
			func_1764();
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_8_object;
		var_5_object = var_8_object;
		func_1674(var_8_object);
		int var_17_int; object var_18_object;
		var_5_object = var_18_object;
		func_1751(var_18_object);
		int var_7_int;
		var_17_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_367(var_7_int);
			object var_24_object;
			var_5_object = var_24_object;
			func_1754();
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		int var_9_int;
		object var_11_object;
		var_5_bool = var_11_object;
		object var_12_object;
		var_6_bool = var_12_object;
		bool var_13_bool;
		var_7_object = var_13_bool;
		func_1810(var_13_bool);
		bool var_10_bool;
		if(var_10_bool != 0) {
			int var_14_int; object var_15_object; bool var_16_bool;
			var_5_bool = var_15_object;
			var_7_object = var_16_bool;
			func_1756(var_16_bool);
			var_14_int = var_9_int;
			if(var_9_int > 0) {
				if(var_9_int > 1)
					func_367(var_9_int);
				object var_22_object;
				var_5_bool = var_22_object;
				func_1759();
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1766(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_367(var_7_int);
			object var_15_object;
			var_5_object = var_15_object;
			func_1769();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object)
	{
		int var_8_int;
		object var_10_object;
		var_5_bool = var_10_object;
		string var_11_string;
		var_6_object = var_11_string;
		bool var_9_bool;
		func_1588(var_9_bool, var_10_object, var_11_string);
		if(var_9_bool != 0) {
			func_367(var_8_int);
			object var_25_object; string var_26_string;
			var_5_bool = var_25_object;
			var_6_object = var_26_string;
			func_1620(var_25_object, var_26_string);
		} else {
			int var_36_int; string var_37_string; object var_38_object;
			var_6_object = var_37_string;
			var_5_bool = var_38_object;
			func_1771(var_38_object);
			var_36_int = var_8_int;
			if(!(var_8_int > 0)) goto Label_308;
			if(var_8_int > 1)
				func_367(var_8_int);
			string var_43_string; object var_44_object;
			var_6_object = var_43_string;
			var_5_bool = var_44_object;
			func_1774();
		}
	Label_308:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, bool var_4_bool, object var_5_object)
	{
		bool var_6_bool; string var_7_string;
		func_1687(var_6_bool, var_7_string);
		if(var_6_bool != 0) {
			func_367(var_7_string);
			string var_16_string;
			var_5_object = var_16_string;
			func_1703(var_16_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		bool var_6_bool; object var_7_object;
		func_1645(var_6_bool, var_7_object);
		if(var_6_bool != 0) {
			func_367(var_7_object);
			object var_19_object;
			var_5_object = var_19_object;
			func_1668(var_19_object);
		} else {
			object var_21_object;
			func_392(var_21_object, var_21_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_6_object;
		func_392(var_6_object, var_6_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, object var_5_object)
	{
		if(var_5_object != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		func_367(var_4_object);
		func_1832();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		func_367(var_5_object);
		object var_7_object;
		var_5_object = var_7_object;
		func_1564();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		@RequestClearPath(var_5_object);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1761(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_770();
			object var_14_object;
			var_5_object = var_14_object;
			func_1764();
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_8_object;
		var_5_object = var_8_object;
		func_1674(var_8_object);
		int var_17_int; object var_18_object;
		var_5_object = var_18_object;
		func_1751(var_18_object);
		int var_7_int;
		var_17_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_770();
			object var_23_object;
			var_5_object = var_23_object;
			func_1754();
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		int var_9_int;
		object var_11_object;
		var_5_bool = var_11_object;
		object var_12_object;
		var_6_bool = var_12_object;
		bool var_13_bool;
		var_7_object = var_13_bool;
		func_1810(var_13_bool);
		bool var_10_bool;
		if(var_10_bool != 0) {
			int var_14_int; object var_15_object; bool var_16_bool;
			var_5_bool = var_15_object;
			var_7_object = var_16_bool;
			func_1756(var_16_bool);
			var_14_int = var_9_int;
			if(var_9_int > 0) {
				if(var_9_int > 1)
					func_770();
				object var_21_object;
				var_5_bool = var_21_object;
				func_1759();
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1766(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_770();
			object var_14_object;
			var_5_object = var_14_object;
			func_1769();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object)
	{
		int var_8_int;
		object var_10_object;
		var_5_bool = var_10_object;
		string var_11_string;
		var_6_object = var_11_string;
		bool var_9_bool;
		func_1588(var_9_bool, var_10_object, var_11_string);
		if(var_9_bool != 0) {
			func_770();
			object var_24_object; string var_25_string;
			var_5_bool = var_24_object;
			var_6_object = var_25_string;
			func_1620(var_24_object, var_25_string);
		} else {
			int var_35_int; string var_36_string; object var_37_object;
			var_6_object = var_36_string;
			var_5_bool = var_37_object;
			func_1771(var_37_object);
			var_35_int = var_8_int;
			if(!(var_8_int > 0)) goto Label_653;
			if(var_8_int > 1)
				func_770();
			string var_42_string; object var_43_object;
			var_6_object = var_42_string;
			var_5_bool = var_43_object;
			func_1774();
		}
	Label_653:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, bool var_4_bool, object var_5_object)
	{
		string var_7_string;
		var_5_object = var_7_string;
		bool var_6_bool;
		func_1687(var_6_bool, var_7_string);
		if(var_6_bool != 0) {
			func_770();
			string var_15_string;
			var_5_object = var_15_string;
			func_1703(var_15_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		func_770();
		func_1832();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_7_object;
		var_5_object = var_7_object;
		bool var_6_bool;
		func_1645(var_6_bool, var_7_object);
		if(var_6_bool != 0) {
			func_770();
			object var_18_object;
			var_5_object = var_18_object;
			func_1668(var_18_object);
		}
	}

}


task task_3
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_8_object;
		var_5_object = var_8_object;
		func_1674(var_8_object);
		int var_17_int; object var_18_object;
		var_5_object = var_18_object;
		func_1805(var_18_object);
		int var_7_int;
		var_17_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_880();
			object var_23_object;
			var_5_object = var_23_object;
			func_1808();
		}
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, bool var_4_bool, object var_5_object)
	{
		string var_7_string;
		var_5_object = var_7_string;
		bool var_6_bool;
		func_1687(var_6_bool, var_7_string);
		if(var_6_bool != 0) {
			func_880();
			string var_15_string;
			var_5_object = var_15_string;
			func_1703(var_15_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		func_880();
		func_1832();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		func_880();
		object var_6_object;
		var_5_object = var_6_object;
		func_1564();
	}

}


task task_4
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object)
	{
		object var_8_object;
		var_5_object = var_8_object;
		func_1674(var_8_object);
		int var_17_int; object var_18_object;
		var_5_object = var_18_object;
		func_1805(var_18_object);
		int var_7_int;
		var_17_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_1076(var_7_int);
			object var_24_object;
			var_5_object = var_24_object;
			func_1808();
		}
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string)
	{
		bool var_6_bool; string var_7_string;
		func_1687(var_6_bool, var_7_string);
		if(var_6_bool != 0) {
			func_1076(var_7_string);
			string var_16_string;
			var_5_string = var_16_string;
			func_1703(var_16_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		func_1076(var_4_object);
		func_1832();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int)
	{
		if(var_5_int != 0)
			return 0;
		bool var_8_bool;
		func_1092(var_8_bool, var_1_bool);
		if(!var_8_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object)
	{
		@RequestClearPath(var_5_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object)
	{
		func_1076(var_5_object);
		object var_7_object;
		var_5_object = var_7_object;
		func_1564();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string)
{
	float var_8_float;
	if(var_6_string == "health") {
		@GetProperty("health", var_8_float);
		if(var_8_float <= 0)
			@SignalDeath(var_5_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object)
{
	object var_6_object;
	var_5_object = var_6_object;
	func_1543(var_6_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, float var_7_float, float var_8_float)
{
	object var_9_object;
	var_5_object = var_9_object;
	int var_10_int;
	var_6_int = var_10_int;
	float var_11_float;
	var_7_float = var_11_float;
	func_1333(var_9_object, var_10_int, var_11_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, float var_7_float, float var_8_float, cvector var_9_cvector, cvector var_10_cvector)
{
	object var_11_object;
	var_5_object = var_11_object;
	int var_12_int;
	var_6_int = var_12_int;
	float var_13_float;
	var_7_float = var_13_float;
	cvector var_14_cvector;
	var_9_cvector = var_14_cvector;
	cvector var_15_cvector;
	var_10_cvector = var_15_cvector;
	func_1401(var_13_float, var_14_cvector, var_15_cvector);
}


// @pe
void func_0(object var_7_object)
{
	object var_8_object;
	var_7_object = var_8_object;
	func_33(var_8_object);
	object var_88_object;
	var_7_object = var_88_object;
	func_1813(var_88_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_517(bool var_39_bool)
{
	var_39_bool = false;
}


void func_519(object var_33_object, cvector var_34_cvector)
{
	object var_36_object;
	@FindShiftedPathTo(var_36_object, var_34_cvector);
	var_36_object = var_33_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1543(object var_6_object)
{
	object var_7_object;
	var_6_object = var_7_object;
	TaskCall(0);
	func_0(var_7_object);
	TaskReturn();
}


void func_33(object var_8_object)
{
	cvector var_19_cvector; cvector var_20_cvector; cvector var_21_cvector; cvector var_22_cvector; string var_23_string; object var_24_object; bool var_25_bool; bool var_26_bool; float var_27_float; cvector var_28_cvector;
	if(var_8_object == null) {
		func_124("fdie");
	} else {
		var_8_object->GetPosition(var_19_cvector);
		@GetPosition(var_20_cvector);
		@GetDirection(var_21_cvector);
		var_22_cvector = var_20_cvector - var_19_cvector;
		var_62_float = GetByIndex(var_22_cvector, 0);
		var_63_float = GetByIndex(var_21_cvector, 0);
		var_65_float = GetByIndex(var_22_cvector, 2);
		var_66_float = GetByIndex(var_21_cvector, 2);
		if(((var_62_float * var_63_float) + (var_65_float * var_66_float)) >= 0)
			var_23_string = "fdie";
		else
			var_23_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_8_object = var_24_object;
		var_73_bool = IsFuncExist(var_8_object, "GetScriptProperty", 2);
		if(var_73_bool != 0) {
			var_8_object->HasScriptProperty(var_25_bool, "Owner");
			if(var_25_bool != 0) {
				var_8_object->GetScriptProperty(var_24_object, "Owner");
				if(var_24_object == null)
					var_8_object = var_24_object;
			}
		}
		var_80_bool = IsFuncExist(var_24_object, "@GetEyesHeight", 1);
		if(var_80_bool != 0) {
			var_24_object->GetEyesHeight(var_27_float);
			var_28_cvector = [0.0, 0.0, 0.0];
			var_81_float = GetByIndex(var_28_cvector, 1);
			var_27_float = var_81_float;
			SetByIndex(var_28_cvector, 1) = var_81_float;
			@LookAsync(var_8_object, "head", var_28_cvector);
			var_26_bool = true;
		} else {
			var_26_bool = false;

		}
		string var_83_string;
		var_23_string = var_83_string;
		func_1420(var_83_string);
		@PlayAnimation("all", var_23_string);
		@WaitForAnimEnd();
		if(var_26_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_23_string);
		@RemoveEnvelope();
		var_24_object = null;
	}
	
}


// @pe
void func_1588(bool var_9_bool, object var_10_object, string var_11_string)
{
	if(var_11_string == "unholster") {
		bool var_14_bool; object var_15_object;
		var_10_object = var_15_object;
		func_1776(var_15_object);
		var_14_bool = var_9_bool;
		return 0;
	EMIT "GOTO 0x652";
	}
	if(var_11_string == "player_shot") {
		bool var_18_bool; object var_19_object;
		var_10_object = var_19_object;
		func_1781(var_19_object);
		var_18_bool = var_9_bool;
		return 0;
	EMIT "GOTO 0x652";
	}
	if(var_11_string == "battle") {
		bool var_22_bool; object var_23_object;
		var_10_object = var_23_object;
		func_1786(var_23_object);
		var_22_bool = var_9_bool;
		return 0;
	}
	var_9_bool = false;
}


void func_1076(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1092(bool var_8_bool, object var_9_object)
{
	object var_11_object;
	var_9_object = var_11_object;
	bool var_10_bool;
	func_1265(var_10_bool, var_11_object);
	var_10_bool = var_8_bool;
}


void func_1099(string var_109_string)
{
	var_109_string = "run";
}


void func_1101(cvector var_39_cvector, object var_40_object)
{
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	var_40_object->GetPosition(var_44_cvector);
	var_39_cvector = var_44_cvector - var_43_cvector;
}


// @pe
void func_1620(object var_24_object, string var_25_string)
{
	if(var_25_string == "unholster") {
		object var_28_object;
		var_24_object = var_28_object;
		func_1779();
	} else if(var_25_string == "player_shot") {
			object var_31_object;
			var_24_object = var_31_object;
			func_1784();
	}
Label_1644:
	for(;;) {

	}
	
	if(!(var_25_string == "battle")) goto Label_1644;
	object var_34_object;
	var_24_object = var_34_object;
	func_1789();
}


void func_1108(float var_123_float, object var_124_object)
{
	cvector var_128_cvector;
	@GetPosition(var_128_cvector);
	cvector var_129_cvector;
	var_124_object->GetPosition(var_129_cvector);
	var_123_float = (var_129_cvector - var_128_cvector) | (var_129_cvector - var_128_cvector);
}


void func_1116(bool var_89_bool, object var_90_object)
{
	bool var_92_bool;
	@IsPlayerActor(var_90_object, var_92_bool);
	var_92_bool = var_89_bool;
}


void func_1121(bool var_112_bool, object var_113_object, string var_114_string)
{
	var_119_bool = IsFuncExist(var_113_object, "HasProperty", 2);
	if(!var_119_bool) { //@nz
		var_112_bool = false;
		return 2;
	}
	bool var_116_bool;
	var_113_object->HasProperty(var_114_string, var_116_bool);
	var_116_bool = var_112_bool;
}


void func_1645(bool var_6_bool, object var_7_object)
{
	bool var_9_bool;
	bool var_10_bool = false;
	bool var_11_bool; object var_12_object;
	var_7_object = var_12_object;
	func_1776(var_12_object);
	if(var_11_bool != 0) {
		bool var_13_bool; object var_14_object;
		func_1116(var_13_bool, var_14_object);
		if(var_13_bool != 0)
			var_10_bool = true;
	}
	if(var_10_bool != 0) {
		var_14_object->IsWeaponHolstered(var_9_bool);
		if(!var_9_bool) //@nz
			var_6_bool = true;
	}
	var_6_bool = false;
}


void func_1133(bool var_104_bool, object var_105_object, string var_106_string, float var_107_float, float var_108_float, float var_109_float)
{
	object var_113_object;
	var_105_object = var_113_object;
	string var_114_string;
	var_106_string = var_114_string;
	bool var_112_bool;
	func_1121(var_112_bool, var_113_object, var_114_string);
	if(!var_112_bool) //@nz
		var_104_bool = false;
	float var_111_float;
	var_105_object->GetProperty(var_106_string, var_111_float);
	float var_122_float; float var_124_float; float var_125_float;
	var_108_float = var_124_float;
	var_109_float = var_125_float;
	func_1477(var_122_float, (var_111_float + var_107_float), var_124_float, var_125_float);
	var_105_object->SetProperty(var_106_string, var_122_float);
	var_104_bool = true;
}


// @pe
void func_124(string var_30_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_31_string;
	var_30_string = var_31_string;
	func_1420(var_31_string);
	@PlayAnimation("all", var_30_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_30_string);
	@RemoveEnvelope();
}


void func_1155(float var_133_float, object var_134_object, float var_135_float)
{
	float var_139_float;
	object var_141_object;
	var_134_object = var_141_object;
	bool var_140_bool;
	func_1121(var_140_bool, var_141_object, "disease");
	if(!var_140_bool) { //@nz
		var_133_float = 0;
		return 4;
	}
	float var_138_float = 0;
	bool var_144_bool; object var_145_object;
	func_1121(var_144_bool, var_145_object, "armor_disease");
	if(var_144_bool != 0) {
		var_145_object->GetProperty("armor_disease", var_138_float);
		var_138_float /= 100;
	}
	bool var_149_bool; object var_150_object;
	func_1121(var_149_bool, var_150_object, "immunity");
	if(var_149_bool != 0) {
		var_150_object->GetProperty("immunity", var_139_float);
		var_138_float += var_139_float;
		bool var_153_bool; object var_154_object; float var_156_float;
		var_134_object = var_154_object;
		var_156_float = -var_135_float;
		func_1133(var_153_bool, var_154_object, "immunity", var_156_float, (float)0, (float)1);
	}
	if(var_138_float >= 1) {
		var_133_float = 0.0;
		return 4;
	}
	var_135_float *= ((1 - var_138_float) / 2);
	bool var_177_bool; object var_178_object; float var_180_float;
	var_134_object = var_178_object;
	var_135_float = var_180_float;
	func_1133(var_177_bool, var_178_object, "disease", var_180_float, (float)0, (float)1);
	bool var_183_bool; object var_184_object;
	var_134_object = var_184_object;
	func_1116(var_183_bool, var_184_object);
	if(var_183_bool != 0) {
		float var_187_float;
		var_135_float = var_187_float;
		func_1523(var_187_float);
	}
	var_135_float = var_133_float;
}


// @pe
void func_1668(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	func_1779();
}


// @pe
void func_1674(object var_8_object)
{
	bool var_9_bool; object var_10_object;
	func_1116(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		object var_13_object;
		func_1461(var_13_object);
		@ReportReputationChange(var_10_object, var_13_object, 0.0);
	}
}


void func_1687(bool var_6_bool, string var_7_string)
{
	object var_9_object;
	if(var_7_string == "heal") {
		@FindActor(var_9_object, "player");
		bool var_13_bool; object var_14_object;
		var_9_object = var_14_object;
		func_1791(var_14_object);
		var_13_bool = var_6_bool;
	EMIT "Stack[-1] = 0";
	}
	var_6_bool = false;
}


void func_1703(string var_16_string)
{
	object var_18_object;
	if(var_16_string == "heal") {
		@FindActor(var_18_object, "player");
		object var_22_object;
		var_18_object = var_22_object;
		func_1794();
		var_18_object = null;
	}
}


void func_171(void)
{
	bool var_7_bool;
	func_1415(var_7_bool);
	if(!var_7_bool) //@nz
		func_1832();
}


void func_689(void)
{
	int var_50_int; int var_51_int; bool var_52_bool; float var_53_float; bool var_54_bool;
	@WaitForAnimEnd();
	bool var_55_bool;
	func_1415(var_55_bool);
	if(!var_55_bool) //@nz
		return 14;
	int var_57_int;
	func_1723(var_57_int);
	int var_48_int;
	var_57_int = var_48_int;
	int var_49_int = 0;
	
	for(;;) {
		bool var_70_bool = false;
		if(var_49_int < 5) {
			bool var_73_bool;
			func_1415(var_73_bool);
			if(var_73_bool != 0)
				var_70_bool = true;
		}
		if(var_70_bool != 0) {
			@irand(var_50_int, 3);
			if(var_50_int == 0) {
				if(var_48_int == 0) goto Label_736;
				@irand(var_51_int, var_48_int);
				string var_79_string; int var_80_int;
				var_51_int = var_80_int;
				func_1716(var_79_string, var_80_int);
				@PlayAnimation("all", var_79_string);
				@WaitForAnimEnd(var_52_bool);
				if(!var_52_bool) { //@nz
				} else {
			} else {
			if(var_50_int == 1) {
				@rand(var_53_float, 4);
				@Sleep((var_53_float + 1), var_54_bool);
				if(!var_54_bool) { //@nz
					goto Label_765;
				}
			} else if(var_49_int != 0) {
				goto Label_765;
			}
			}
					bool var_82_bool;
					func_768(var_82_bool);
					var_83_bool = !var_82_bool; //@nz
					if(var_83_bool == 0) goto Label_760;
			}
		}
	Label_765:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_760:
		@ResetAAS();
		var_49_int += 1;
	}
	
}


void func_1716(string var_63_string, int var_64_int)
{
	string var_66_string = "idle";
	if(var_64_int != 0)
		var_66_string += var_64_int;
	var_66_string = var_63_string;
}


void func_1723(int var_57_int)
{
	int var_60_int; bool var_61_bool;
	var_60_int = 0;
	
	for(;;) {
		string var_63_string; int var_64_int;
		var_60_int = var_64_int;
		func_1716(var_63_string, var_64_int);
		@HasAnimation(var_61_bool, "all", var_63_string);
		if(!var_61_bool) //@nz
			break;
		var_60_int += 1;
	}
	var_60_int = var_57_int;
}


void func_1224(bool var_25_bool, object var_26_object)
{
	bool var_28_bool;
	var_26_object->IsDead(var_28_bool);
	var_28_bool = var_25_bool;
}


// @pe
void func_1740(int var_48_int)
{
	var_48_int = 2;
}


void func_1229(bool var_14_bool, object var_15_object)
{
	if(var_15_object == null) {
		var_14_bool = false;
		return 4;
	}
	bool var_21_bool = false;
	var_24_bool = IsFuncExist(var_15_object, "IsDead", 1);
	if(var_24_bool != 0) {
		bool var_25_bool; object var_26_object;
		var_15_object = var_26_object;
		func_1224(var_25_bool, var_26_object);
		if(var_25_bool != 0)
			var_21_bool = true;
	}
	if(var_21_bool != 0) {
		var_14_bool = false;
		return 4;
	}
	object var_18_object;
	@GetScene(var_18_object);
	if(var_18_object == null) {
		var_14_bool = false;
		return 4;
	}
	object var_19_object;
	var_15_object->GetScene(var_19_object);
	if(var_18_object != var_19_object) {
		var_14_bool = false;
		return 4;
	}
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1743(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	TaskCall(3);
	func_775(var_56_object);
	TaskReturn();
}


// @pe
void func_1751(int var_17_int)
{
	var_17_int = 0;
}


// @pe
void func_1754(void)
{
}


// @pe
void func_1756(int var_14_int)
{
	var_14_int = 0;
}


// @pe
void func_1759(void)
{
}


// @pe
void func_1761(int var_8_int)
{
	var_8_int = 0;
}


// @pe
void func_1764(void)
{
}


// @pe
void func_1766(int var_8_int)
{
	var_8_int = 0;
}


// @pe
void func_1769(void)
{
}


// @pe
void func_1771(int var_35_int)
{
	var_35_int = 0;
}


// @pe
void func_1774(void)
{
}


// @pe
void func_1776(bool var_11_bool)
{
	var_11_bool = false;
}


void func_1265(bool var_10_bool, object var_11_object)
{
	object var_15_object;
	var_11_object = var_15_object;
	bool var_14_bool;
	func_1229(var_14_bool, var_15_object);
	if(!var_14_bool) { //@nz
		var_10_bool = false;
		return 2;
	}
	bool var_32_bool; object var_33_object;
	func_1121(var_32_bool, var_33_object, "noaccess");
	if(!var_32_bool) { //@nz
		var_10_bool = true;
		return 2;
	}
	int var_13_int;
	var_33_object->GetProperty("noaccess", var_13_int);
	var_10_bool = var_13_int == 0;
}


// @pe
void func_1779(void)
{
}


// @pe
void func_1781(bool var_18_bool)
{
	var_18_bool = false;
}


// @pe
void func_1784(void)
{
}


// @pe
void func_1786(bool var_22_bool)
{
	var_22_bool = false;
}


// @pe
void func_1789(void)
{
}


// @pe
void func_1791(bool var_13_bool)
{
	var_13_bool = false;
}


void func_768(bool var_82_bool)
{
	var_82_bool = true;
}


void func_770(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1794(void)
{
}


void func_1796(void)
{
	var_6_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


// @pe
void func_775(object var_56_object)
{
	object var_58_object;
	var_56_object = var_58_object;
	bool var_57_bool;
	func_1800(var_57_bool, var_58_object);
	if(var_57_bool != 0) {
		object var_61_object;
		var_56_object = var_61_object;
		func_831(var_61_object);
	}
}


void func_1800(bool var_57_bool, object var_58_object)
{
	bool var_60_bool;
	@IsPlayerActor(var_58_object, var_60_bool);
	var_60_bool = var_57_bool;
}


void func_1289(object var_22_object)
{
	string var_36_string;
	if(var_22_object == null)
		return 14;
	bool var_30_bool;
	@IsDead(var_30_bool);
	if(var_30_bool != 0)
		return 14;
	int var_31_int;
	@GetSecondaryAnimationType(var_31_int);
	if(var_31_int < 0)
		return 14;
	cvector var_32_cvector;
	var_22_object->GetPosition(var_32_cvector);
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_35_cvector = var_33_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_35_cvector, 0);
	var_42_float = GetByIndex(var_34_cvector, 0);
	var_44_float = GetByIndex(var_35_cvector, 2);
	var_45_float = GetByIndex(var_34_cvector, 2);
	if(((var_41_float * var_42_float) + (var_44_float * var_45_float)) >= 0)
		var_36_string = "fhit";
	else
		var_36_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_36_string + "1"), (var_36_string + "2"), -10);
	
}


// @pe
void func_1805(int var_17_int)
{
	var_17_int = 0;
}


// @pe
void func_1808(void)
{
}


// @pe
void func_1810(bool var_10_bool)
{
	var_10_bool = false;
}


// @pe
void func_1813(object var_88_object)
{
	object var_90_object;
	var_88_object = var_90_object;
	bool var_89_bool;
	func_1116(var_89_bool, var_90_object);
	if(var_89_bool != 0) {
		bool var_93_bool; object var_94_object;
		var_88_object = var_94_object;
		func_1488(var_93_bool, var_94_object, -0.05);
	}
	var_131_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1832(void)
{
	object var_11_object;
	func_1461(var_11_object);
	@RemoveActor(var_11_object);
}


void func_1333(object var_9_object, int var_10_int, float var_11_float)
{
	cvector var_21_cvector; object var_22_object; int var_23_int; bool var_24_bool; cvector var_25_cvector; cvector var_26_cvector;
	bool var_30_bool = false;
	bool var_31_bool = false;
	if(var_9_object != 0) {
		if(var_10_int != 4)
			var_31_bool = true;
	}
	if(var_31_bool != 0) {
		if(var_10_int != 5)
			var_30_bool = true;
	}
	if(var_30_bool != 0) {
		cvector var_37_cvector; cvector var_38_cvector;
		cvector var_39_cvector; object var_40_object;
		var_9_object = var_40_object;
		func_1101(var_39_cvector, var_40_object);
		var_39_cvector = var_38_cvector;
		func_1467(var_37_cvector, var_38_cvector);
		var_37_cvector = var_21_cvector;
		@CreateVectorVector(var_22_object);
		var_23_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_23_int), var_24_bool, var_25_cvector, var_26_cvector);
			if(!var_24_bool) { //@nz
				break;
			Label_1395:
				var_22_object = null;
	}
			object var_99_object;
			var_9_object = var_99_object;
			func_1289(var_99_object);
		}
		if((var_26_cvector | var_21_cvector) >= 0.70710677)
			var_22_object->add(var_25_cvector);
		var_23_int += 1;
	}
	int var_27_int;
	var_22_object->size(var_27_int);
	if(var_27_int == 0) goto Label_1395;
	int var_28_int;
	@irand(var_28_int, var_27_int);
	cvector var_29_cvector;
	var_22_object->get(var_29_cvector, var_28_int);
	object var_54_object; int var_55_int; float var_56_float; cvector var_57_cvector; cvector var_58_cvector;
	var_9_object = var_54_object;
	var_10_int = var_55_int;
	var_11_float = var_56_float;
	var_29_cvector = var_57_cvector;
	var_58_cvector = -var_21_cvector;
	func_1401(var_56_float, var_57_cvector, var_58_cvector);
}


void func_831(object var_61_object)
{
	bool var_63_bool;
	
	for(;;) {
		bool var_64_bool; object var_65_object;
		TaskCall(4);
		func_939(var_64_bool, var_65_object);
		TaskReturn();
		if(var_66_bool != 0) {
			@Face(var_65_object);
			@WaitForAnimEnd(var_63_bool);
			if(!var_63_bool) { //@nz
			} else {
					@PlayAnimation("all", "dattack_begin");
					@WaitForAnimEnd(var_63_bool);
					var_122_bool = !var_63_bool; //@nz
					if(var_122_bool == 0) goto Label_855;
			}
		}
	Label_879:
		for(;;) {
			return 2;

		}

	Label_855:
		float var_123_float; object var_124_object;
		var_61_object = var_124_object;
		func_1108(var_123_float, var_124_object);
		if(var_123_float <= 90000.0) {
			float var_133_float; object var_134_object;
			var_61_object = var_134_object;
			func_1155(var_133_float, var_134_object, 0.2);
		}
		@PlayAnimation("all", "dattack_end");
		@WaitForAnimEnd(var_63_bool);
		if(!var_63_bool) { //@nz
			goto Label_879;
		}
		@StopAsync();
	}
}


void func_367(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_503(var_4_bool, var_5_object);
}


void func_880(void)
{
	@StopAsync();
	@StopAnimation();
}


void func_375(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_510(var_9_bool, var_10_int);
}


void func_1401(object var_11_object, cvector var_14_cvector, cvector var_15_cvector)
{
	object var_18_object;
	@GetScene(var_18_object);
	object var_19_object;
	@AddActorByType(var_19_object, "scripted", var_18_object, var_14_cvector, var_15_cvector, "blood_dir.xml");
	object var_22_object;
	var_11_object = var_22_object;
	func_1289(var_22_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1415(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_392(bool var_2_bool, object var_6_object)
{
	bool var_11_bool; object var_12_object;
	func_1265(var_11_bool, var_12_object);
	if(!var_11_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_9_bool;
	@IsPlayerActor(var_12_object, var_9_bool);
	if(!var_9_bool) //@nz
		return 4;
	int var_48_int; object var_49_object;
	var_6_object = var_49_object;
	func_1740(var_49_object);
	int var_10_int;
	var_48_int = var_10_int;
	if(var_10_int > 0) {
		if(var_10_int > 1)
			func_375(var_10_int);
		object var_55_object;
		var_6_object = var_55_object;
		func_1743(var_55_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_1420(string var_31_string)
{
	bool var_40_bool; int var_41_int; bool var_42_bool; int var_43_int; bool var_44_bool; float var_45_float; cvector var_46_cvector; cvector var_47_cvector;
	@IsExisting3DSound(var_40_bool, var_31_string);
	if(!var_40_bool) { //@nz
		var_41_int = 0;

		for(;;) {
			@IsExisting3DSound(var_42_bool, (var_31_string + (var_41_int + 1)));
			if(!var_42_bool) { //@nz
				break;
			Label_1440:
				@irand(var_43_int, var_41_int);
				var_31_string += (var_43_int + 1);
	}
			@Is3DSoundLoaded(var_44_bool, var_31_string);
			if(var_44_bool != 0) {
				@GetEyesHeight(var_45_float);
				@GetDirection(var_46_cvector);
				var_47_cvector = var_46_cvector * 50;
				var_58_float = GetByIndex(var_47_cvector, 1);
				SetByIndex(var_47_cvector, 1) = (var_58_float + var_45_float);
				@PlayGlobalSound(var_31_string, var_47_cvector);
			}
		}
		var_41_int += 1;
	}
	var_53_bool = !var_41_int; //@nz
	if(var_53_bool == 0) goto Label_1440;
}


// @pe
void func_939(bool var_64_bool, object var_65_object)
{
	bool var_68_bool; object var_69_object;
	func_952(var_64_bool, var_69_object, var_68_bool, var_69_object, (float)150, (float)3000, false, true);
	var_68_bool = var_64_bool;
}


void func_432(bool var_0_bool, bool var_1_bool)
{
	float var_20_float; cvector var_21_cvector; cvector var_22_cvector; bool var_23_bool; object var_24_object; bool var_25_bool;
	@rand(var_20_float, 0.5);
	@Sleep(var_20_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_444:
				@GetPosition(var_22_cvector);
				float var_29_float;
				func_491(var_29_float);
				@GetRandomPFPointInCircle(var_21_cvector, var_22_cvector, var_29_float, var_23_bool);
				if(var_23_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_444;
			}
				var_1_bool = false;
		}
		}
		goto Label_460;

	Label_460:
		object var_33_object; cvector var_34_cvector;
		var_21_cvector = var_34_cvector;
		func_519(var_33_object, var_34_cvector);
		var_33_object = var_24_object;
		if(var_24_object != null) {
			@RotatePath(var_24_object, var_25_bool);
			if(var_25_bool != 0) {
				bool var_39_bool;
				func_517(var_39_bool);
				@FollowPath(var_24_object, var_39_bool, var_25_bool);
				var_24_object = null;
				if(var_25_bool != 0) {
					TaskCall(2);
					func_689();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_24_object = null;
	}
	
}


void func_1461(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_950(string var_108_string)
{
	var_108_string = "zwalk";
}


void func_952(bool var_0_bool, bool var_1_bool, bool var_68_bool, object var_69_object, float var_70_float, float var_71_float, bool var_72_bool, bool var_73_bool)
{
	bool var_82_bool; object var_84_object; cvector var_85_cvector; cvector var_86_cvector; float var_88_float; object var_89_object;
	var_0_bool = false;
	var_1_bool = var_69_object;
	bool var_83_bool;
	var_73_bool = var_83_bool;
	
	for(;;) {
		bool var_90_bool; object var_91_object;
		var_69_object = var_91_object;
		func_1092(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			var_68_bool = false;
			return 16;
		}
		var_69_object->GetPosition(var_85_cvector);
		@GetPosition(var_86_cvector);
		var_88_float = (var_85_cvector - var_86_cvector) | (var_85_cvector - var_86_cvector);
		bool var_95_bool = false;
		if(var_71_float > 0) {
			if(var_88_float > (var_71_float * var_71_float))
				var_95_bool = true;
		}
		if(var_95_bool != 0) {
			@Stop();
			var_68_bool = false;
			return 16;
		}
		if(var_88_float > (var_70_float * var_70_float)) {
			var_69_object->GetPFPosition(var_85_cvector);
			@FindPathTo(var_89_object, var_85_cvector);
			if(var_89_object != null) {
				var_89_object = var_84_object;
				var_89_object = null;
			}
			if(var_84_object != null) {
				if(var_83_bool == 0) goto Label_1005;
				var_83_bool = false;
				@RotatePath(var_84_object, var_82_bool);
				if(!var_82_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_108_string;
						func_950(var_108_string);
						string var_109_string;
						func_1099(var_109_string);
						@FollowPath(var_84_object, var_72_bool, var_82_bool, var_108_string, var_109_string);
						if(!var_82_bool) { //@nz
							if(var_0_bool == 0) goto Label_1024;
							var_84_object = null;
						}
					EMIT "GOTO 0x401";

					Label_1024:
						} else {
					var_84_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_82_bool);
					if(!var_82_bool) { //@nz
						if(var_0_bool != 0) {
							var_84_object = null;
							goto Label_1052;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1052;
		}
			var_89_object = null;
			goto Label_1050;

		Label_1050:
			var_84_object = null;

		}
	Label_1052:
		for(;;) {
			var_68_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1467(cvector var_37_cvector, cvector var_38_cvector)
{
	float var_46_float = sqrt(var_38_cvector | var_38_cvector);
	if(var_46_float < 0.000001)
		var_37_cvector = [0.0, 0.0, 0.0];
	var_37_cvector = var_38_cvector / var_46_float;
}


// @pe
void func_1477(float var_122_float, float var_123_float, float var_124_float, float var_125_float)
{
	if(var_123_float < var_124_float) {
		var_124_float = var_122_float;
		return 0;
	}
	if(var_123_float > var_125_float) {
		var_125_float = var_122_float;
		return 0;
	}
	var_123_float = var_122_float;
}


// @pe
void func_1488(bool var_93_bool, object var_94_object, float var_95_float)
{
	if(!var_94_object) { //@nz
		var_93_bool = false;
		return 0;
	}
	if(var_95_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_95_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_100_float;
		var_95_float = var_100_float;
		func_1533(var_100_float);
		bool var_104_bool; object var_105_object; float var_107_float;
		var_94_object = var_105_object;
		var_95_float = var_107_float;
		func_1133(var_104_bool, var_105_object, "reputation", var_107_float, (float)0, (float)1);
		var_93_bool = true;
		return 0;

	}
	
	var_93_bool = false;
}


void func_491(float var_29_float)
{
	float var_31_float;
	@GetCameraFarDistance(var_31_float);
	var_31_float = var_29_float;
}


void func_1523(float var_187_float)
{
	object var_189_object;
	@CreateFloatVector(var_189_object);
	var_189_object->add(var_187_float);
	@SendWorldWndMessage(14, var_189_object);
}
EMIT "Stack[-1] = 0";


void func_503(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1533(float var_100_float)
{
	object var_102_object;
	@CreateFloatVector(var_102_object);
	var_102_object->add(var_100_float);
	@SendWorldWndMessage(16, var_102_object);
}
EMIT "Stack[-1] = 0";


void func_510(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


