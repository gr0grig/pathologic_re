// @GLOBALS: 0:object:

task task_0
{
	// @pe
	void OnSee(object actor, float var_1_float, float var_2_float, object var_3_object, cvector var_4_cvector, cvector var_5_cvector, int var_6_int, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		bool var_15_bool; object var_16_object;
		func_1857(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_69(var_13_float, var_16_object);
			object var_67_object;
			var_14_int = var_67_object;
			func_1864(var_67_object);
		}
	}

	// @pe
		void OnAttacked(object actor, float var_1_float, float fDamage, object var_3_object, object var_4_object, cvector var_5_cvector, cvector var_6_cvector, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, object var_49_object)
		{
		object var_51_object;
		var_49_object = var_51_object;
			bool var_50_bool;
		func_1424(var_50_bool, var_51_object);
		if(!var_50_bool) { //@nz
			object var_79_object;
			var_49_object = var_79_object;
			func_1875(var_79_object);
		}
		func_69(var_15_int, var_49_object);
		object var_87_object;
		var_49_object = var_87_object;
		func_1888(var_87_object);
		}

	// @pe
	void OnTimer(object var_0_object, float fTime, float var_2_float, int var_3_int, cvector var_4_cvector, cvector var_5_cvector, int var_6_int, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		if(var_14_int != 100) {
		}
		func_69(var_13_float, var_14_int);
	}

	// @pe
	void OnPlayerDamage(object actor, float var_1_float, float fDamage, object var_3_object, object var_4_object, cvector var_5_cvector, cvector var_6_cvector, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int)
	{
		object var_17_object;
		var_14_float = var_17_object;
		object var_18_object;
		var_15_int = var_18_object;
		bool var_16_bool;
		func_1938(var_16_bool, var_17_object, var_18_object);
		if(var_16_bool != 0) {
			object var_49_object;
			var_14_float = var_49_object;
			func_28();
		}
	}

	// @pe
	void OnDeath(object actor, float var_1_float, float var_2_float, object var_3_object, cvector var_4_cvector, cvector var_5_cvector, int var_6_int, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		func_69(var_13_float, var_14_int);
		object var_16_object;
		var_14_int = var_16_object;
		func_1932();
	}

	// @pe
	void OnHear(object actor, float var_1_float, float var_2_float, object var_3_object, cvector var_4_cvector, cvector var_5_cvector, int var_6_int, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		bool var_15_bool = false;
		if(var_14_int == actor) {
			bool var_17_bool; object var_18_object;
			var_14_int = var_18_object;
			func_1836(var_17_bool, var_18_object);
			if(var_17_bool != 0)
				var_15_bool = true;
		}
		if(var_15_bool != 0) {
			@Face(actor);
			@SetTimer(100, 15);
		}
	}

	// @pe
	void OnStopHear(object actor, float var_1_float, float var_2_float, object var_3_object, cvector var_4_cvector, cvector var_5_cvector, int var_6_int, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		if(var_14_int == actor) {
			@StopAsync();
			@KillTimer(100);
		}
	}

}


maintask task_1
{
	void init(object var_0_object, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int)
	{
		func_1798();
		func_288(var_12_float, var_13_int);
	}

	// @pe
	void OnDeath(object actor, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		func_174();
		object var_15_object;
		var_14_int = var_15_object;
		func_1932();
	}

	// @pe
	void OnSee(object actor, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		object var_16_object;
		var_14_int = var_16_object;
		bool var_15_bool;
		func_1857(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_174();
			object var_66_object;
			var_14_int = var_66_object;
			func_1864(var_66_object);
		}
	}

	// @pe
	void OnHear(object actor, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		object var_16_object;
		var_14_int = var_16_object;
		bool var_15_bool;
		func_1836(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_174();
			object var_69_object;
			var_14_int = var_69_object;
			func_1849(var_69_object);
		}
	}

	// @pe
		void OnAttacked(object actor, float var_1_float, float fDamage, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, int var_6_int, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, object var_15_object, bool var_16_bool, object var_17_object, bool var_18_bool, object var_37_object, object var_38_object)
		{
		object var_40_object;
		var_38_object = var_40_object;
			bool var_39_bool;
		func_1424(var_39_bool, var_40_object);
		if(!var_39_bool) { //@nz
			object var_74_object;
			var_38_object = var_74_object;
			func_1875(var_74_object);
		}
		func_174();
		object var_81_object;
		var_38_object = var_81_object;
		func_1888(var_81_object);
		}

	// @pe
	void OnPlayerDamage(object actor, float var_1_float, float fDamage, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int)
	{
		object var_17_object;
		var_14_float = var_17_object;
		object var_18_object;
		var_15_int = var_18_object;
		bool var_16_bool;
		func_1938(var_16_bool, var_17_object, var_18_object);
		if(var_16_bool != 0) {
			object var_49_object;
			var_14_float = var_49_object;
			func_216();
		}
	}

	void OnTimer(object var_0_object, float fTime, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, int var_6_int, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		object var_17_object; bool var_18_bool;
		if(var_14_int == 25) {
			@FindActor(var_17_object, "player");
			@CanSee(var_18_bool, var_17_object);
			bool var_22_bool = true;
			if(var_18_bool != 1) {
				float var_24_float; object var_25_object;
				var_17_object = var_25_object;
				func_1277(var_24_float, var_25_object);
				var_33_bool = var_24_float <= 22500;
				if(var_33_bool != 1)
					var_22_bool = false;
			}
			if(var_22_bool != 0) {
				if((var_2_float + 1) > 5) {
					object var_37_object;
					var_17_object = var_37_object;
					func_248(var_37_object);
					var_2_float = 0;
				}
			}
			var_17_object = null;
		}
	}

}


task task_2
{
	// @pe
	void OnAttacked(object actor, float var_1_float, float fDamage, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		object var_15_object;
		var_14_int = var_15_object;
		func_1875(var_15_object);
	}

	// @pe
	void OnPlayerDamage(object actor, float var_1_float, float fDamage, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int)
	{
		object var_17_object;
		var_14_float = var_17_object;
		object var_18_object;
		var_15_int = var_18_object;
		bool var_16_bool;
		func_1938(var_16_bool, var_17_object, var_18_object);
	}

	// @pe
	void OnTimer(object var_0_object, float fTime, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, int var_8_int, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		if(var_14_int != 0)
			return 0;
		bool var_17_bool;
		func_528(var_17_bool, fTime);
		if(!var_17_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		@RequestClearPath(var_14_int);
	}

	// @pe
	void OnDeath(object actor, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int)
	{
		func_512(var_14_int);
		object var_16_object;
		var_14_int = var_16_object;
		func_1932();
	}

}


task task_3
{
	// @pe
	void OnAttacked(object actor, float var_1_float, float fDamage, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_14_object)
	{
		object var_15_object;
		var_14_object = var_15_object;
		func_1875(var_15_object);
	}

	// @pe
	void OnPlayerDamage(object actor, float var_1_float, float fDamage, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_14_object, object var_15_object)
	{
		object var_17_object;
		var_14_object = var_17_object;
		object var_18_object;
		var_15_object = var_18_object;
		bool var_16_bool;
		func_1938(var_16_bool, var_17_object, var_18_object);
	}

}


task task_4
{
	void OnUse(object actor, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_14_object)
	{
		bool var_16_bool;
		@IsOverrideActive(var_16_bool);
		if(!var_16_bool) //@nz
			@WorkWithCorpse(var_14_object);
	}

	// @pe
	void OnHit(object actor, float var_1_float, float fDamage, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_14_object, string var_15_string)
	{
	}

	// @pe
	void OnDeath(object actor, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_14_object)
	{
	}

}


// @pe
void OnHit(object actor, float var_1_float, float fDamage, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
{
	object var_18_object;
	var_14_object = var_18_object;
	int var_19_int;
	var_15_int = var_19_int;
	float var_20_float;
	var_16_float = var_20_float;
	func_1448(var_19_int, var_20_float);
}


void OnPropertyChange(object var_0_object, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_14_object, string var_15_string)
{
	float var_17_float;
	if(var_15_string == "health") {
		@GetProperty("health", var_17_float);
		if(var_17_float <= 0)
			@SignalDeath(var_14_object);
	}
}


// @pe
void OnDeath(object actor, float var_1_float, float var_2_float, cvector var_3_cvector, cvector var_4_cvector, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_1903(var_15_object);
}


void func_512(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1537(float var_38_float, float var_39_float, float var_40_float, float var_41_float)
{
	if(var_39_float < var_40_float) {
		var_40_float = var_38_float;
		return 0;
	}
	if(var_39_float > var_41_float) {
		var_41_float = var_38_float;
		return 0;
	}
	var_39_float = var_38_float;
}


void func_1793(int var_84_int, string var_85_string)
{
	int var_87_int;
	@GetInvItemByName(var_87_int, var_85_string);
	var_87_int = var_84_int;
}


// @pe
void func_0(float var_1_float, float var_2_float, object var_70_object)
{
	@GetSeeThreshold(var_1_float);
	@GetSeeFOV(var_2_float);
	@SetSeeThreshold(var_1_float / 1.5);
	object var_76_object;
	func_101(var_76_object, var_76_object);
}


void func_388(object var_0_object, float var_1_float, bool var_152_bool, object var_153_object, float var_154_float, float var_155_float, bool var_156_bool, bool var_157_bool)
{
	bool var_168_bool; object var_170_object; cvector var_171_cvector; cvector var_172_cvector; float var_174_float; object var_175_object;
	var_0_object = false;
	var_1_float = var_153_object;
	bool var_169_bool;
	var_157_bool = var_169_bool;
	
	for(;;) {
		bool var_176_bool; object var_177_object;
		var_153_object = var_177_object;
		func_528(var_176_bool, var_177_object);
		if(!var_176_bool) { //@nz
			var_152_bool = false;
			return 16;
		}
		var_153_object->GetPosition(var_171_cvector);
		@GetPosition(var_172_cvector);
		var_174_float = (var_171_cvector - var_172_cvector) | (var_171_cvector - var_172_cvector);
		bool var_181_bool = false;
		if(var_155_float > 0) {
			if(var_174_float > (var_155_float * var_155_float))
				var_181_bool = true;
		}
		if(var_181_bool != 0) {
			@Stop();
			var_152_bool = false;
			return 16;
		}
		if(var_174_float > (var_154_float * var_154_float)) {
			var_153_object->GetPFPosition(var_171_cvector);
			@FindPathTo(var_175_object, var_171_cvector);
			if(var_175_object != null) {
				var_175_object = var_170_object;
				var_175_object = null;
			}
			if(var_170_object != null) {
				if(var_169_bool == 0) goto Label_441;
				var_169_bool = false;
				@RotatePath(var_170_object, var_168_bool);
				if(!var_168_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_194_string;
						func_535(var_194_string);
						string var_195_string;
						func_537(var_195_string);
						@FollowPath(var_170_object, var_156_bool, var_168_bool, var_194_string, var_195_string);
						if(!var_168_bool) { //@nz
							if(var_0_object == 0) goto Label_460;
							var_170_object = null;
						}
					EMIT "GOTO 0x1cd";

					Label_460:
						} else {
					var_170_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_168_bool);
					if(!var_168_bool) { //@nz
						if(var_0_object != 0) {
							var_170_object = null;
							goto Label_488;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_488;
		}
			var_175_object = null;
			goto Label_486;

		Label_486:
			var_170_object = null;

		}
	Label_488:
		for(;;) {
			var_152_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_1285(bool var_28_bool, object var_29_object, string var_30_string)
{
	var_35_bool = IsFuncExist(var_29_object, "HasProperty", 2);
	if(!var_35_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_32_bool;
	var_29_object->HasProperty(var_30_string, var_32_bool);
	var_32_bool = var_28_bool;
}


void func_1798(void)
{
	var_14_object = GlobalVars[0];
	object var_15_object;
	func_1548(var_15_object);
	var_15_object = var_14_object;
	GlobalVars[0] = var_14_object;
}


void func_1548(object var_15_object)
{
	object var_17_object;
	@CreateObjectSet(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_1805(bool var_20_bool, object var_21_object)
{
	bool var_26_bool; object var_27_object;
	func_1424(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_20_bool = false;
		return 4;
	}
	var_61_object = GlobalVars[0];
	bool var_24_bool;
	var_61_object->in(var_24_bool, var_27_object);
	if(var_24_bool != 0) {
		var_20_bool = true;
		return 4;
	}
	bool var_63_bool; object var_64_object;
	func_1285(var_63_bool, var_64_object, "reputation");
	if(!var_63_bool) { //@nz
		var_20_bool = false;
		return 4;
	}
	float var_25_float;
	var_64_object->GetProperty("reputation", var_25_float);
	var_20_bool = var_25_float < 0.1;
}


void func_1424(bool var_19_bool, object var_20_object)
{
	object var_24_object;
	var_20_object = var_24_object;
	bool var_23_bool;
	func_1388(var_23_bool, var_24_object);
	if(!var_23_bool) { //@nz
		var_19_bool = false;
		return 2;
	}
	bool var_41_bool; object var_42_object;
	func_1285(var_41_bool, var_42_object, "noaccess");
	if(!var_41_bool) { //@nz
		var_19_bool = true;
		return 2;
	}
	int var_22_int;
	var_42_object->GetProperty("noaccess", var_22_int);
	var_19_bool = var_22_int == 0;
}


// @pe
void func_528(bool var_17_bool, object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	bool var_19_bool;
	func_1424(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
}


void func_1938(bool var_16_bool, object var_17_object, object var_18_object)
{
	object var_24_object;
	var_18_object = var_24_object;
	bool var_23_bool;
	func_1285(var_23_bool, var_24_object, "reputation");
	if(!var_23_bool) { //@nz
		var_16_bool = false;
		return 4;
	}
	float var_21_float;
	var_18_object->GetProperty("reputation", var_21_float);
	if(var_21_float < 0.5) {
		var_16_bool = false;
		return 4;
	}
	bool var_22_bool;
	@CanSee(var_22_bool, var_17_object);
	bool var_36_bool = true;
	if(var_22_bool != 1) {
		float var_38_float; object var_39_object;
		func_1277(var_38_float, var_39_object);
		var_47_bool = var_38_float <= 160000.0;
		if(var_47_bool != 1)
			var_36_bool = false;
	}
	if(var_36_bool != 0) {
		@ReportReputationChange(var_39_object, var_18_object, -0.2);
		var_16_bool = true;
		return 4;
	}
	var_16_bool = false;
}


void func_1297(bool var_20_bool, object var_21_object, string var_22_string, float var_23_float, float var_24_float, float var_25_float)
{
	object var_29_object;
	var_21_object = var_29_object;
	string var_30_string;
	var_22_string = var_30_string;
	bool var_28_bool;
	func_1285(var_28_bool, var_29_object, var_30_string);
	if(!var_28_bool) //@nz
		var_20_bool = false;
	float var_27_float;
	var_21_object->GetProperty(var_22_string, var_27_float);
	float var_38_float; float var_40_float; float var_41_float;
	var_24_float = var_40_float;
	var_25_float = var_41_float;
	func_1537(var_38_float, (var_27_float + var_23_float), var_40_float, var_41_float);
	var_21_object->SetProperty(var_22_string, var_38_float);
	var_20_bool = true;
}


void func_1554(int var_54_int)
{
	float var_56_float;
	@GetGameTime(var_56_float);
	var_54_int = 1 + (var_56_float / 24);
}


// @pe
void func_1530(float var_381_float, float var_382_float, float var_383_float)
{
	if(var_382_float < var_383_float)
		var_382_float = var_381_float;
	else
		var_383_float = var_381_float;
	
}


void func_535(string var_194_string)
{
	var_194_string = "walk";
}


void func_920(bool var_417_bool, float var_418_float)
{
	float var_421_float; bool var_422_bool;
	@rand(var_421_float);
	if(var_421_float < var_418_float) {

		for(;;) {
			@IsAnimationPlaying(var_422_bool);
			if(!var_422_bool) { //@nz
			} else {
				bool var_425_bool;
				func_984(var_422_bool, var_425_bool);
				if(var_425_bool != 0) {
					var_417_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_417_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_537(string var_195_string)
{
	var_195_string = "run";
}


void func_1563(int var_51_int, int var_52_int)
{
	int var_67_int;
	if(var_51_int > var_52_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_66_int = 0;
	if(var_51_int != var_52_int) {
		@irand(var_67_int, (var_52_int - var_51_int));
	} else if(var_51_int == 0) {
		return 8;
	}
	var_66_int += var_51_int;
	if(var_66_int == 0)
		return 8;
	int var_68_int;
	@GetInvItemByName(var_68_int, "Money");
	bool var_69_bool;
	@AddItem(var_69_bool, var_68_int, 0, var_66_int);
	
}


void func_156(object var_0_object)
{
	@Stop();
	@StopGroup0();
	@StopAsync();
	@KillTimer(100);
	var_0_object = null;
}


void func_1052(object var_0_object, bool var_238_bool)
{
	bool var_240_bool;
	var_243_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_243_bool != 0) {
		var_0_object->IsAttacking(var_240_bool); //@t
		var_240_bool = var_238_bool;
	}
	var_238_bool = false;
}


// @pe
void func_539(object var_83_object, bool var_84_bool)
{
	object var_91_object; bool var_92_bool;
	func_566(var_88_bool, var_89_float, var_90_int, var_91_object, var_92_bool, var_91_object, var_92_bool, 180.0);
}


void func_288(object var_0_object, float var_1_float)
{
	int var_22_int; bool var_23_bool; cvector var_24_cvector; object var_25_object;
	@GetPFPosition(var_1_float);
	@GetDirection(var_0_object);
	
	for(;;) {
		@SetTimer(25, 1);
		@irand(var_22_int, 60);
		@Sleep((var_22_int + 30), var_23_bool);
		if(var_23_bool != 0) {
			func_187();
		} else {
		for(;;) {
			@GetPFPosition(var_24_cvector);
			float var_32_float; cvector var_34_cvector;
			var_24_cvector = var_34_cvector;
			func_1526(var_32_float, var_1_float, var_34_cvector);
			if(var_32_float > 40000) {
				@FindPathTo(var_25_object, var_1_float);
				if(var_25_object != null) {
					@RotatePath(var_25_object, var_23_bool);
					if(!var_23_bool) { //@nz
					} else {
					@FollowPath(var_25_object, false, var_23_bool);
					if(!var_23_bool) { //@nz
						goto Label_367;
					}
					var_43_float = GetByIndex(var_0_object, 0);
					var_44_float = GetByIndex(var_0_object, 2);
					@Rotate(var_43_float, var_44_float, var_23_bool);
					if(!var_23_bool) { //@nz
						goto Label_367;
					}
					@WaitForAnimEnd(var_23_bool);
					if(!var_23_bool) { //@nz
						goto Label_367;
					}
					goto Label_368;
				EMIT "GOTO 0x160";
				}
				@Sleep(1);
				var_25_object = null;
				goto Label_367;
			}
			var_48_float = GetByIndex(var_0_object, 0);
			var_49_float = GetByIndex(var_0_object, 2);
			@Rotate(var_48_float, var_49_float, var_23_bool);
			if(!var_23_bool) { //@nz
				goto Label_367;
			}
			@WaitForAnimEnd(var_23_bool);
			if(!var_23_bool) { //@nz
				goto Label_367;
			}
			goto Label_368;
			}
		Label_367:
		}
		}
	Label_368:
	}
	
}
EMIT "Return(); Pop(8)";


void func_801(object var_0_object, float var_331_float, int var_332_int)
{
	object var_336_object; float var_337_float; float var_338_float;
	@GetVictim((var_331_float * 0.9), var_336_object);
	@ReportAttack(var_0_object);
	if(var_336_object == var_0_object) {
		float var_342_float; object var_343_object; int var_344_int;
		var_336_object = var_343_object;
		var_332_int = var_344_int;
		func_547(var_344_int);
		var_342_float = var_337_float;
		float var_345_float; object var_346_object; float var_347_float; int var_348_int;
		var_336_object = var_346_object;
		int var_349_int; object var_350_object; int var_351_int;
		var_336_object = var_350_object;
		var_332_int = var_351_int;
		func_550(var_351_int);
		var_349_int = var_348_int;
		func_1319(var_345_float, var_346_object, var_347_float, var_348_int);
		var_345_float = var_338_float;
		int var_398_int;
		func_1095(var_398_int);
		@ReportHit(var_0_object, var_398_int, var_338_float, var_347_float);
		object var_399_object; float var_400_float;
		var_336_object = var_399_object;
		var_338_float = var_400_float;
		func_1097();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_547(float var_342_float)
{
	var_342_float = 0.1;
}


// @pe
void func_550(int var_349_int)
{
	var_349_int = 0;
}


void func_1319(float var_345_float, object var_346_object, float var_347_float, int var_348_int)
{
	int var_358_int; int var_360_int;
	object var_365_object;
	var_346_object = var_365_object;
	bool var_364_bool;
	func_1285(var_364_bool, var_365_object, "health");
	if(!var_364_bool) //@nz
		var_345_float = 0.0;
	bool var_368_bool; object var_369_object;
	func_1285(var_368_bool, var_369_object, "armor");
	if(!var_368_bool) //@nz
		var_358_int = 0;
	else
		var_369_object->GetProperty("armor", var_358_int);
	string var_373_string; int var_374_int;
	var_348_int = var_374_int;
	func_1262(var_373_string, var_374_int);
	string var_359_string = "armor_" + var_373_string;
	bool var_377_bool; object var_378_object; string var_379_string;
	var_346_object = var_378_object;
	func_1285(var_377_bool, var_378_object, var_379_string);
	if(!var_377_bool) //@nz
		var_360_int = 0;
	else
		var_346_object->GetProperty(var_379_string, var_360_int);

	float var_381_float;
	func_1530(var_381_float, ((var_358_int + var_360_int) / 100.0), (float)1);
	float var_361_float;
	var_381_float = var_361_float;
	float var_362_float;
	var_346_object->GetProperty("health", var_362_float);
	float var_391_float;
	func_1537(var_391_float, (var_362_float - (var_347_float * (1 - var_361_float))), (float)0, (float)1);
	var_346_object->SetProperty("health", var_391_float);
	float var_363_float = var_345_float;
	
}


void func_1063(float var_2_float, int var_5_int)
{
	int var_316_int;
	if(!var_2_float) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_315_float;
	@rand(var_315_float);
	float var_322_float;
	func_1101(var_322_float);
	if(var_315_float < var_322_float) {
		@irand(var_316_int, var_2_float);
		@Speak("attack" + (var_316_int + 1));
		int var_327_int;
		func_1099(var_327_int);
		var_5_int = var_327_int;
	}
}


void func_1448(object var_18_object, int var_19_int)
{
	object var_31_object; object var_32_object; cvector var_33_cvector; float var_34_float; string var_40_string;
	bool var_41_bool = false;
	if(var_19_int != 4) {
		if(var_19_int != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		@GetScene(var_31_object);
		@GetPosition(var_33_cvector);
		@GetEyesHeight(var_34_float);
		var_46_float = GetByIndex(var_33_cvector, 1);
		SetByIndex(var_33_cvector, 1) = (var_46_float + (var_34_float / 2));
		@AddActorByType(var_32_object, "scripted", var_31_object, var_33_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_32_object = null;
		var_31_object = null;
	}
	if(var_18_object == null)
		return 20;
	int var_35_int;
	@GetSecondaryAnimationType(var_35_int);
	if(var_35_int < 0)
		return 20;
	cvector var_36_cvector;
	var_18_object->GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_36_cvector;
	var_55_float = GetByIndex(var_39_cvector, 0);
	var_56_float = GetByIndex(var_38_cvector, 0);
	var_58_float = GetByIndex(var_39_cvector, 2);
	var_59_float = GetByIndex(var_38_cvector, 2);
	if(((var_55_float * var_56_float) + (var_58_float * var_59_float)) >= 0)
		var_40_string = "fhit";
	else
		var_40_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_40_string + "1"), (var_40_string + "2"), -10);
	
}


void func_1836(bool var_15_bool, object var_16_object)
{
	bool var_18_bool;
	@IsPlayerActor(var_16_object, var_18_bool);
	if(!var_18_bool) //@nz
		var_15_bool = false;
	bool var_20_bool; object var_21_object;
	var_16_object = var_21_object;
	func_1805(var_20_bool, var_21_object);
	var_20_bool = var_15_bool;
}


void func_174(void)
{
	func_370();
}


void func_944(object var_0_object, bool var_246_bool, float var_247_float)
{
	bool var_253_bool; cvector var_254_cvector; cvector var_255_cvector; cvector var_256_cvector; float var_257_float;
	
	for(;;) {
		@IsAnimationPlaying(var_253_bool);
		if(!var_253_bool) //@nz
			break;
		bool var_259_bool;
		func_984(var_257_float, var_259_bool);
		if(var_259_bool != 0) {
			var_246_bool = true;
			return 10;
		}
		bool var_297_bool;
		func_1424(var_297_bool, var_0_object);
		if(!var_297_bool) { //@nz
			var_246_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_254_cvector); //@t
		@GetPFPosition(var_255_cvector);
		var_256_cvector = var_254_cvector - var_255_cvector;
		var_257_float = var_256_cvector | var_256_cvector;
		if(var_257_float < (var_247_float * var_247_float)) {
			bool var_302_bool; float var_303_float;
			var_247_float = var_303_float;
			func_840(var_256_cvector, var_257_float, var_302_bool, var_303_float);
			var_246_bool = true;
			return 10;
		}
		@sync();
	}
	var_246_bool = false;
}


void func_566(object var_0_object, cvector var_3_cvector, int var_5_int, object var_91_object, bool var_92_bool, float var_93_float, bool var_158_bool, bool var_220_bool)
{
	float var_105_float; cvector var_106_cvector; cvector var_107_cvector; bool var_109_bool; float var_112_float; cvector var_113_cvector; bool var_114_bool; float var_115_float;
	func_766(var_113_cvector, var_114_bool, var_115_float);
	var_5_int = 0;
	var_140_bool = IsFuncExist(var_91_object, "@GetAttackDistance", 1);
	if(var_140_bool != 0) {
		var_91_object->GetAttackDistance(var_105_float);
		var_105_float += 50;
	} else {
						var_93_float = var_105_float;
	}
	if(var_105_float >= 150)
		var_105_float = 150;
	var_3_cvector = false;
	var_0_object = var_91_object;
	bool var_108_bool;
	@IsPlayerActor(var_0_object, var_108_bool);
	if(var_92_bool != 0)
		var_109_bool = false;
	else
		var_109_bool = true;

	
Label_596:
	for(;;) {
		bool var_146_bool = false;
		bool var_147_bool;
		func_1424(var_147_bool, var_0_object);
		if(var_147_bool != 0) {
			if(!var_3_cvector) //@nz
				var_146_bool = true;
		}
		if(var_146_bool != 0) {
			var_0_object->GetPFPosition(var_106_cvector); //@t
			@GetPFPosition(var_107_cvector);
			var_112_float = (var_106_cvector - var_107_cvector) | (var_106_cvector - var_107_cvector);
			if(var_112_float >= ((300.0 + var_105_float) * (300.0 + var_105_float))) {
				bool var_152_bool; float var_154_float;
				var_105_float = var_154_float;
				TaskCall(2);
				func_388(var_158_bool, var_159_object, var_152_bool, var_0_object, var_154_float, 3000.0, true, false);
				TaskReturn();
				if(!var_158_bool) { //@nz
				} else {
					var_109_bool = false;
			} else {
			if(var_112_float >= (var_93_float * var_93_float)) {
				var_0_object->GetPFPosition(var_113_cvector); //@t
				@CanReachByPF(var_114_bool, var_113_cvector);
				if(!var_114_bool) { //@nz
					bool var_214_bool; float var_216_float;
					var_105_float = var_216_float;
					TaskCall(2);
					func_388(var_220_bool, var_221_object, var_214_bool, var_0_object, var_216_float, 3000.0, true, false);
					TaskReturn();
					if(!var_220_bool) { //@nz
						goto Label_749;
					}
					var_109_bool = false;
					goto Label_596;
				}
				if(!var_109_bool) { //@nz
					func_1515(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					@StopAsync();
					var_109_bool = true;
				}
				@rand(var_115_float);
				bool var_235_bool;
				var_237_bool = var_115_float < 0.6;
				if(var_237_bool != 1) {
					bool var_238_bool;
					func_1052(true, var_238_bool);
					if(var_238_bool != 1)
						var_235_bool = false;
				}
				if(var_235_bool != 0) {
					@Face(var_0_object);
					@PlayAnimation("all", "attack_stay");
					bool var_246_bool; float var_247_float;
					func_944(var_115_float, var_246_bool, var_247_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_429_bool;
					func_1052(var_115_float, var_429_bool);
					var_430_bool = !var_429_bool; //@nz
					if(var_430_bool == 0) goto Label_739;
					bool var_431_bool;
					func_1424(var_431_bool, var_0_object);
					if(!var_431_bool) { //@nz
						goto Label_749;
					}
					var_0_object->GetPFPosition(var_106_cvector); //@t
					@GetPFPosition(var_107_cvector);
					if(!(((var_106_cvector - var_107_cvector) | (var_106_cvector - var_107_cvector)) < (var_247_float * var_247_float))) goto Label_739;
					bool var_436_bool; float var_437_float;
					var_93_float = var_437_float;
					func_840(var_114_bool, var_115_float, var_436_bool, var_437_float);
					var_438_bool = !var_436_bool; //@nz
					if(var_438_bool == 0) goto Label_739;
					goto Label_749;
			}
				bool var_439_bool; float var_440_float;
				var_93_float = var_440_float;
				func_840(var_114_bool, var_115_float, var_439_bool, var_440_float);
				if(!var_439_bool) { //@nz
					goto Label_749;
				}
				var_109_bool = true;

			}
		Label_739:
			goto Label_748;
			}
			Label_748:
			}
		}
	Label_749:
		@WaitForAnimEnd();
		if(var_3_cvector != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_108_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_1849(object var_69_object)
{
	object var_70_object;
	var_69_object = var_70_object;
	TaskCall(0);
	func_0(var_72_float, var_73_float, var_70_object);
	TaskReturn();
}


void func_1593(void)
{
	bool var_48_bool;
	@ClearSubContainer(0);
	int var_54_int;
	func_1554(var_54_int);
	func_1563(0, (100 + (var_54_int * 100)));
	int var_80_int;
	func_1554(var_80_int);
	int var_49_int;
	var_80_int = var_49_int;
	int var_47_int;
	@irand(var_47_int, 3);
	if(var_47_int == 0) {
		int var_84_int;
		func_1793(var_84_int, "bottle_water");
		@AddItem(var_48_bool, var_84_int, 0, 1);
	}
	@irand(var_47_int, 3);
	if(var_47_int == 0) {
		int var_93_int;
		func_1793(var_93_int, "rusk");
		@AddItem(var_48_bool, var_93_int, 0, 1);
	}
	@irand(var_47_int, 7);
	if(var_47_int == 0) {
		int var_100_int;
		func_1793(var_100_int, "bandage");
		@AddItem(var_48_bool, var_100_int, 0, 1);
	}
	@irand(var_47_int, 7);
	if(var_47_int == 0) {
		int var_107_int;
		func_1793(var_107_int, "tourniquet");
		@AddItem(var_48_bool, var_107_int, 0, 1);
	}
	@irand(var_47_int, 20);
	if(var_47_int == 0) {
		int var_114_int;
		func_1793(var_114_int, "packet");
		@AddItem(var_48_bool, var_114_int, 0, 1);
	}
	@irand(var_47_int, 20);
	if(var_47_int == 0) {
		int var_121_int;
		func_1793(var_121_int, "hook");
		@AddItem(var_48_bool, var_121_int, 0, 1);
	}
	@irand(var_47_int, 30);
	if(var_47_int == 0) {
		int var_128_int;
		func_1793(var_128_int, "watch");
		@AddItem(var_48_bool, var_128_int, 0, 1);
	}
	if(var_49_int >= 3) {
		@irand(var_47_int, 2);
		if(var_47_int == 0) {
			int var_137_int;
			func_1793(var_137_int, "alpha_pills");
			@AddItem(var_48_bool, var_137_int, 0, 1);
		}
	}
	if(var_49_int >= 4) {
		@irand(var_47_int, 5);
		if(var_47_int == 0) {
			int var_146_int;
			func_1793(var_146_int, "beta_pills");
			@AddItem(var_48_bool, var_146_int, 0, 1);
		}
	}
	if(var_49_int >= 6) {
		@irand(var_47_int, 8);
		if(var_47_int == 0) {
			int var_155_int;
			func_1793(var_155_int, "gamma_pills");
			@AddItem(var_48_bool, var_155_int, 0, 1);
		}
	}
	if(var_49_int >= 8) {
		@irand(var_47_int, 2);
		if(var_47_int == 0) {
			int var_164_int;
			func_1793(var_164_int, "revolver_ammo");
			@AddItem(var_48_bool, var_164_int, 0, 1);
		}
		@irand(var_47_int, 2);
		if(var_47_int == 0) {
			int var_171_int;
			func_1793(var_171_int, "rifle_ammo");
			@AddItem(var_48_bool, var_171_int, 0, 1);
		}
	}
}


void func_187(void)
{
}


// @pe
void func_1857(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_1805(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


void func_69(float var_1_float, float var_2_float)
{
	@SetSeeThreshold(var_1_float);
	@SetSeeFOV(var_2_float);
	func_156(var_80_int);
}


void func_1095(int var_398_int)
{
	var_398_int = 0;
}


// @pe
void func_1864(object var_66_object)
{
	object var_67_object;
	var_66_object = var_67_object;
	TaskCall(3);
	func_539(var_67_object, true);
	TaskReturn();
	@ResetAAS();
}


void func_840(object var_0_object, float var_1_float, bool var_302_bool, float var_303_float)
{
	int var_306_int;
	@irand(var_306_int, var_1_float);
	var_306_int += 1;
	@Face(var_0_object);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_306_int));
	@WaitForAnimEnd();
	bool var_307_bool;
	func_1063(var_306_int, var_307_bool);
	bool var_328_bool;
	func_1424(var_328_bool, var_0_object);
	if(!var_328_bool) { //@nz
		@StopAsync();
		var_302_bool = false;
		return 4;
	}
	float var_331_float; int var_332_int;
	var_303_float = var_331_float;
	var_306_int = var_332_int;
	func_801(var_307_bool, var_331_float, var_332_int);
	@HasAnimation(var_307_bool, "all", ("attack_middle" + var_306_int));
	if(var_307_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_306_int));
		@WaitForAnimEnd();
		bool var_408_bool;
		func_1424(var_408_bool, var_0_object);
		if(!var_408_bool) { //@nz
			@StopAsync();
			var_302_bool = false;
			return 4;
		}
		float var_411_float; int var_412_int;
		var_303_float = var_411_float;
		var_306_int = var_412_int;
		func_801(var_307_bool, var_411_float, var_412_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_306_int));
	bool var_417_bool;
	func_920(var_417_bool, 0.75);
	@StopAsync();
	var_302_bool = true;
}


// @pe
void func_1097(void)
{
}


void func_1099(int var_327_int)
{
	var_327_int = 1;
}


void func_1101(float var_322_float)
{
	var_322_float = 0.5;
}


void func_1103(object var_16_object)
{
	bool var_18_bool;
	@IsPlayerActor(var_16_object, var_18_bool);
	if(var_18_bool != 0) {
		bool var_20_bool; object var_21_object;
		var_16_object = var_21_object;
		func_1297(var_20_bool, var_21_object, "reputation", -0.3, (float)0, (float)1);
	}
	func_1593();
	object var_175_object;
	var_16_object = var_175_object;
	func_1124(var_175_object);
}


// @pe
void func_1234(string var_198_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_198_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_198_string);
	@RemoveEnvelope();
}


void func_1875(object var_15_object)
{
	if(var_15_object == null) {
	}
	var_19_object = GlobalVars[0];
	bool var_17_bool;
	var_19_object->in(var_17_bool, var_15_object);
	if(!var_17_bool) { //@nz
		var_21_object = GlobalVars[0];
		var_21_object->add(var_15_object);
	}
}


void func_86(float var_2_float, bool var_87_bool)
{
	@SetSeeFOV(var_2_float * 1.8);
	@PlayAnimation("all", "hunt");
	bool var_89_bool;
	@WaitForAnimEnd(var_89_bool);
	@SetSeeFOV(var_2_float);
	var_87_bool = !var_89_bool;
}


void func_984(object var_0_object, bool var_259_bool)
{
	cvector var_265_cvector; cvector var_266_cvector; float var_268_float;
	bool var_270_bool;
	func_1424(var_270_bool, var_0_object);
	if(!var_270_bool) { //@nz
		var_259_bool = false;
		return 10;
	}
	bool var_273_bool;
	float var_269_float;
	func_1052(var_269_float, var_273_bool);
	if(var_273_bool != 0) {
		var_0_object->GetPFPosition(var_265_cvector); //@t
		@GetPFPosition(var_266_cvector);
		var_268_float = (var_265_cvector - var_266_cvector) | (var_265_cvector - var_266_cvector);
		var_0_object->GetAttackDistance(var_269_float); //@t
		var_269_float += 50;
		if(var_268_float <= (var_269_float * var_269_float)) {
			bool var_277_bool;
			func_1018(var_268_float, var_269_float, var_277_bool);
			if(var_277_bool != 0) {
				var_259_bool = true;
				return 10;
			}
		}
	}
	var_259_bool = false;
}


// @pe
void func_1888(object var_81_object)
{
	object var_82_object;
	var_81_object = var_82_object;
	func_1875(var_82_object);
	object var_83_object;
	var_81_object = var_83_object;
	TaskCall(3);
	func_539(var_83_object, true);
	TaskReturn();
	@ResetAAS();
}


// @pe
void func_1124(object var_175_object)
{
	object var_176_object;
	var_175_object = var_176_object;
	func_1147(var_176_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_101(object var_0_object, object var_76_object)
{
	bool var_79_bool; int var_80_int;
	var_0_object = var_76_object;
	@Face(var_0_object);
	@SetTimer(100, 15);
	
	for(;;) {
		if(!(var_0_object != null)) goto Label_124;
		@irand(var_80_int, 5);
		@Sleep((var_80_int + 5), var_79_bool);
		bool var_87_bool;
		func_86(var_80_int, var_87_bool);
		if(var_87_bool != 0)
			func_69(var_79_bool, var_80_int);
	}
}


void func_1383(bool var_34_bool, object var_35_object)
{
	bool var_37_bool;
	var_35_object->IsDead(var_37_bool);
	var_37_bool = var_34_bool;
}


void func_1515(object var_224_object)
{
	cvector var_228_cvector;
	var_224_object->GetPosition(var_228_cvector);
	cvector var_229_cvector;
	@GetPosition(var_229_cvector);
	cvector var_230_cvector = var_228_cvector - var_229_cvector;
	var_231_float = GetByIndex(var_230_cvector, 0);
	var_232_float = GetByIndex(var_230_cvector, 2);
	@RotateAsync(var_231_float, var_232_float);
}


void func_1388(bool var_23_bool, object var_24_object)
{
	if(var_24_object == null) {
		var_23_bool = false;
		return 4;
	}
	bool var_30_bool = false;
	var_33_bool = IsFuncExist(var_24_object, "IsDead", 1);
	if(var_33_bool != 0) {
		bool var_34_bool; object var_35_object;
		var_24_object = var_35_object;
		func_1383(var_34_bool, var_35_object);
		if(var_34_bool != 0)
			var_30_bool = true;
	}
	if(var_30_bool != 0) {
		var_23_bool = false;
		return 4;
	}
	object var_27_object;
	@GetScene(var_27_object);
	if(var_27_object == null) {
		var_23_bool = false;
		return 4;
	}
	object var_28_object;
	var_24_object->GetScene(var_28_object);
	if(var_27_object != var_28_object) {
		var_23_bool = false;
		return 4;
	}
	var_23_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1262(string var_373_string, int var_374_int)
{
	if(var_374_int == 1)
		var_373_string = "fire";
	var_373_string = "phys";
}


// @pe
void func_1903(object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	TaskCall(4);
	func_1103(var_16_object);
	TaskReturn();
}


void func_370(void)
{
	@StopGroup0();
	@Stop();
}


void func_1526(float var_32_float, cvector var_33_cvector, cvector var_34_cvector)
{
	var_32_float = (var_34_cvector - var_33_cvector) | (var_34_cvector - var_33_cvector);
}


void func_1270(cvector var_286_cvector, object var_287_object)
{
	cvector var_290_cvector;
	@GetPosition(var_290_cvector);
	cvector var_291_cvector;
	var_287_object->GetPosition(var_291_cvector);
	var_286_cvector = var_291_cvector - var_290_cvector;
}


// @pe
void func_248(object var_37_object)
{
	object var_38_object;
	var_37_object = var_38_object;
	func_216();
}


void func_1018(object var_0_object, cvector var_4_cvector, bool var_277_bool)
{
	object var_282_object;
	@GetScene(var_282_object);
	cvector var_286_cvector;
	func_1270(var_286_cvector, var_0_object);
	var_292_int = -var_286_cvector;
	float var_283_float;
	@FindDirLength(var_283_float, var_292_int, var_4_cvector);
	if(var_283_float < var_4_cvector)
		var_277_bool = false;
	@Face(var_0_object);
	@PlayAnimation("all", "bjump");
	cvector var_284_cvector;
	var_0_object->GetPFPosition(var_284_cvector); //@t
	cvector var_285_cvector;
	@GetPFPosition(var_285_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
	var_277_bool = true;
}
EMIT "Stack[-4] = 0";


void func_1147(object var_176_object)
{
	cvector var_187_cvector; cvector var_188_cvector; cvector var_189_cvector; cvector var_190_cvector; string var_191_string; object var_192_object; bool var_193_bool; bool var_194_bool; float var_195_float; cvector var_196_cvector;
	if(var_176_object == null) {
		func_1234("fdie");
	} else {
		var_176_object->GetPosition(var_187_cvector);
		@GetPosition(var_188_cvector);
		@GetDirection(var_189_cvector);
		var_190_cvector = var_188_cvector - var_187_cvector;
		var_201_float = GetByIndex(var_190_cvector, 0);
		var_202_float = GetByIndex(var_189_cvector, 0);
		var_204_float = GetByIndex(var_190_cvector, 2);
		var_205_float = GetByIndex(var_189_cvector, 2);
		if(((var_201_float * var_202_float) + (var_204_float * var_205_float)) >= 0)
			var_191_string = "fdie";
		else
			var_191_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_176_object = var_192_object;
		var_212_bool = IsFuncExist(var_176_object, "GetScriptProperty", 2);
		if(var_212_bool != 0) {
			var_176_object->HasScriptProperty(var_193_bool, "Owner");
			if(var_193_bool != 0) {
				var_176_object->GetScriptProperty(var_192_object, "Owner");
				if(var_192_object == null)
					var_176_object = var_192_object;
			}
		}
		var_219_bool = IsFuncExist(var_192_object, "@GetEyesHeight", 1);
		if(var_219_bool != 0) {
			var_192_object->GetEyesHeight(var_195_float);
			var_196_cvector = [0.0, 0.0, 0.0];
			var_220_float = GetByIndex(var_196_cvector, 1);
			var_195_float = var_220_float;
			SetByIndex(var_196_cvector, 1) = var_220_float;
			@LookAsync(var_176_object, "head", var_196_cvector);
			var_194_bool = true;
		} else {
			var_194_bool = false;

		}
		@PlayAnimation("all", var_191_string);
		@WaitForAnimEnd();
		if(var_194_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_191_string);
		@RemoveEnvelope();
		var_192_object = null;
	}
	
}


void func_1277(float var_38_float, object var_39_object)
{
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	var_39_object->GetPosition(var_44_cvector);
	var_38_float = (var_44_cvector - var_43_cvector) | (var_44_cvector - var_43_cvector);
}


void func_766(float var_1_float, float var_2_float, cvector var_4_cvector)
{
	bool var_119_bool; bool var_120_bool; cvector var_121_cvector;
	var_1_float = 0;
	
	for(;;) {
		@HasAnimation(var_119_bool, "all", ("attack_begin" + (var_1_float + 1)));
		if(!var_119_bool) { //@nz
		} else {
			var_1_float += 1;
		}
		var_2_float = 0;

		for(;;) {
			@IsExisting3DSound(var_120_bool, ("attack" + (var_2_float + 1)));
			if(!var_120_bool) //@nz
				break;
			var_2_float += 1;
		}
		@GetAnimationOffset(var_121_cvector, "all", "bjump");
		var_135_float = GetByIndex(var_121_cvector, 2);
		var_4_cvector = -var_135_float;

	}
}


