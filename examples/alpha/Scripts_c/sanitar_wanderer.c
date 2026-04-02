// @GLOBALS: 0:object:,1:object:,2:float:,3:bool:,4:object:

task task_0
{
	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		bool var_9_bool; object var_10_object;
		func_1793(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_200(var_10_object);
			object var_63_object;
			var_8_object = var_63_object;
			func_1800(var_63_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		bool var_9_bool; object var_10_object;
		func_1806(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_200(var_10_object);
			object var_63_object;
			var_8_object = var_63_object;
			func_1813(var_63_object);
		}
	}

	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		object var_10_object;
		var_8_object = var_10_object;
		bool var_9_bool;
		func_1326(var_9_bool, var_10_object);
		if(!var_9_bool) { //@nz
			object var_44_object;
			var_8_object = var_44_object;
			func_1861(var_44_object);
		}
		func_200(var_8_object);
		object var_55_object;
		var_8_object = var_55_object;
		func_1878(var_55_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		int var_9_int;
		func_178(var_7_bool, var_9_int, var_9_int);
		int var_39_int;
		var_8_object = var_39_int;
		func_1963(var_39_int);
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		@RequestClearPath(var_8_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		func_200(var_8_object);
		object var_10_object;
		var_8_object = var_10_object;
		func_1917();
	}

}


task task_1
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		object var_10_object;
		var_8_object = var_10_object;
		bool var_9_bool;
		func_1326(var_9_bool, var_10_object);
		if(!var_9_bool) { //@nz
		}
		var_2_bool = var_8_object;
		func_382(var_8_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		int var_9_int;
		func_360(var_7_bool, var_9_int, var_9_int);
		int var_50_int;
		var_8_object = var_50_int;
		func_1963(var_50_int);
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		@RequestClearPath(var_8_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
		func_382(var_8_object);
		object var_10_object;
		var_8_object = var_10_object;
		func_1917();
	}

}


maintask task_2
{
	void init(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		func_1582();
	
		for(;;) {
			func_496(var_6_bool, var_7_object);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		bool var_9_bool; object var_10_object;
		func_1793(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_560(var_7_object, var_10_object);
			object var_62_object;
			var_8_object = var_62_object;
			func_1800(var_62_object);
		} else {
			bool var_352_bool; object var_353_object;
			func_1819(var_352_bool, var_353_object);
			if(var_352_bool == 0) goto Label_443;
			func_560(var_7_object, var_353_object);
			object var_368_object;
			var_8_object = var_368_object;
			func_1851(var_368_object);
		}
	Label_443:
	
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		bool var_9_bool; object var_10_object;
		func_1806(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_560(var_7_object, var_10_object);
			object var_62_object;
			var_8_object = var_62_object;
			func_1813(var_62_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, object var_43_object)
		{
		object var_45_object;
		var_43_object = var_45_object;
			bool var_44_bool;
		func_1326(var_44_bool, var_45_object);
		if(!var_44_bool) { //@nz
			object var_73_object;
			var_43_object = var_73_object;
			func_1861(var_73_object);
		}
		func_560(var_9_object, var_43_object);
		object var_83_object;
		var_43_object = var_83_object;
		func_1878(var_83_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object)
	{
		object var_11_object;
		var_8_object = var_11_object;
		object var_12_object;
		var_9_object = var_12_object;
		bool var_10_bool;
		func_1923(var_10_bool, var_11_object, var_12_object);
		if(var_10_bool != 0) {
			object var_43_object;
			var_8_object = var_43_object;
			func_458();
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int, object var_8_object)
	{
		int var_9_int;
		var_8_object = var_9_int;
		func_1963(var_9_int);
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		@RequestClearPath(var_8_object);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		func_560(var_7_object, var_8_object);
		object var_9_object;
		var_8_object = var_9_object;
		func_1917();
	}

}


task task_3
{
	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		object var_10_object;
		var_8_object = var_10_object;
		bool var_9_bool;
		func_1793(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_726();
			object var_62_object;
			var_8_object = var_62_object;
			func_1800(var_62_object);
		} else {
			bool var_352_bool; object var_353_object;
			var_8_object = var_353_object;
			func_1819(var_352_bool, var_353_object);
			if(var_352_bool == 0) goto Label_604;
			func_726();
			object var_368_object;
			var_8_object = var_368_object;
			func_1851(var_368_object);
		}
	Label_604:
	
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		object var_10_object;
		var_8_object = var_10_object;
		bool var_9_bool;
		func_1806(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_726();
			object var_62_object;
			var_8_object = var_62_object;
			func_1813(var_62_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, object var_43_object)
		{
		object var_45_object;
		var_43_object = var_45_object;
			bool var_44_bool;
		func_1326(var_44_bool, var_45_object);
		if(!var_44_bool) { //@nz
			object var_73_object;
			var_43_object = var_73_object;
			func_1861(var_73_object);
		}
		func_726();
		object var_83_object;
		var_43_object = var_83_object;
		func_1878(var_83_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object)
	{
		object var_11_object;
		var_8_object = var_11_object;
		object var_12_object;
		var_9_object = var_12_object;
		bool var_10_bool;
		func_1923(var_10_bool, var_11_object, var_12_object);
		if(var_10_bool != 0) {
			object var_43_object;
			var_8_object = var_43_object;
			func_619();
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int, object var_8_object)
	{
		int var_9_int;
		var_8_object = var_9_int;
		func_1963(var_9_int);
	}

}


task task_4
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		object var_9_object;
		var_8_object = var_9_object;
		func_1861(var_9_object);
		if(var_8_object != null)
			@Face(var_8_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int)
	{
		int var_9_int;
		var_8_int = var_9_int;
		func_1963(var_9_int);
	}

}


task task_5
{
	void OnUse(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		bool var_10_bool;
		@IsOverrideActive(var_10_bool);
		if(!var_10_bool) //@nz
			@WorkWithCorpse(var_8_object);
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, string var_9_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
	}

}


task task_6
{
	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		func_1121();
		object var_42_object;
		var_8_object = var_42_object;
		func_1917();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		object var_10_object;
		var_8_object = var_10_object;
		bool var_9_bool;
		func_1793(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_1121();
			object var_95_object;
			var_8_object = var_95_object;
			func_1800(var_95_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		object var_10_object;
		var_8_object = var_10_object;
		bool var_9_bool;
		func_1806(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_1121();
			object var_95_object;
			var_8_object = var_95_object;
			func_1813(var_95_object);
		}
	}

	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
	{
		object var_10_object;
		var_8_object = var_10_object;
		bool var_9_bool;
		func_1326(var_9_bool, var_10_object);
		if(!var_9_bool) { //@nz
			object var_44_object;
			var_8_object = var_44_object;
			func_1861(var_44_object);
		}
		func_1121();
		object var_87_object;
		var_8_object = var_87_object;
		func_1878(var_87_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int)
	{
		int var_9_int;
		var_8_int = var_9_int;
		func_1963(var_9_int);
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
{
	object var_12_object;
	var_8_object = var_12_object;
	int var_13_int;
	var_9_int = var_13_int;
	float var_14_float;
	var_10_float = var_14_float;
	func_1384(var_13_int, var_14_float);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, string var_9_string)
{
	float var_11_float;
	if(var_9_string == "health") {
		@GetProperty("health", var_11_float);
		if(var_11_float <= 0)
			@SignalDeath(var_8_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object)
{
	object var_9_object;
	var_8_object = var_9_object;
	func_1888(var_9_object);
}


// @pe
void func_2048(bool var_100_bool, object var_101_object)
{
	object var_103_object;
	var_101_object = var_103_object;
	bool var_102_bool;
	func_1729(var_102_bool, var_103_object);
	var_102_bool = var_100_bool;
}


// @pe
void func_1793(bool var_9_bool, object var_10_object)
{
	object var_12_object;
	var_10_object = var_12_object;
	bool var_11_bool;
	func_2048(var_11_bool, var_12_object);
	var_11_bool = var_9_bool;
}


void func_258(bool var_0_bool, object var_1_object, bool var_148_bool, object var_149_object, float var_150_float, float var_151_float, bool var_152_bool, bool var_153_bool)
{
	bool var_162_bool; object var_164_object; cvector var_165_cvector; cvector var_166_cvector; float var_168_float; object var_169_object;
	var_0_bool = false;
	var_1_object = var_149_object;
	bool var_163_bool;
	var_153_bool = var_163_bool;
	
	for(;;) {
		bool var_170_bool; object var_171_object;
		var_149_object = var_171_object;
		func_398(var_170_bool, var_171_object);
		if(!var_170_bool) { //@nz
			var_148_bool = false;
			return 16;
		}
		var_149_object->GetPosition(var_165_cvector);
		@GetPosition(var_166_cvector);
		var_168_float = (var_165_cvector - var_166_cvector) | (var_165_cvector - var_166_cvector);
		bool var_175_bool = false;
		if(var_151_float > 0) {
			if(var_168_float > (var_151_float * var_151_float))
				var_175_bool = true;
		}
		if(var_175_bool != 0) {
			@Stop();
			var_148_bool = false;
			return 16;
		}
		if(var_168_float > (var_150_float * var_150_float)) {
			var_149_object->GetPFPosition(var_165_cvector);
			@FindPathTo(var_169_object, var_165_cvector);
			if(var_169_object != null) {
				var_169_object = var_164_object;
				var_169_object = null;
			}
			if(var_164_object != null) {
				if(var_163_bool == 0) goto Label_311;
				var_163_bool = false;
				@RotatePath(var_164_object, var_162_bool);
				if(!var_162_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_188_string;
						func_405(var_188_string);
						string var_189_string;
						func_407(var_189_string);
						@FollowPath(var_164_object, var_152_bool, var_162_bool, var_188_string, var_189_string);
						if(!var_162_bool) { //@nz
							if(var_0_bool == 0) goto Label_330;
							var_164_object = null;
						}
					EMIT "GOTO 0x14b";

					Label_330:
						} else {
					var_164_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_162_bool);
					if(!var_162_bool) { //@nz
						if(var_0_bool != 0) {
							var_164_object = null;
							goto Label_358;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_358;
		}
			var_169_object = null;
			goto Label_356;

		Label_356:
			var_164_object = null;

		}
	Label_358:
		for(;;) {
			var_148_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1923(bool var_10_bool, object var_11_object, object var_12_object)
{
	object var_18_object;
	var_12_object = var_18_object;
	bool var_17_bool;
	func_1209(var_17_bool, var_18_object, "reputation");
	if(!var_17_bool) { //@nz
		var_10_bool = false;
		return 4;
	}
	float var_15_float;
	var_12_object->GetProperty("reputation", var_15_float);
	if(var_15_float < 0.5) {
		var_10_bool = false;
		return 4;
	}
	bool var_16_bool;
	@CanSee(var_16_bool, var_11_object);
	bool var_30_bool = true;
	if(var_16_bool != 1) {
		float var_32_float; object var_33_object;
		func_1201(var_32_float, var_33_object);
		var_41_bool = var_32_float <= 160000.0;
		if(var_41_bool != 1)
			var_30_bool = false;
	}
	if(var_30_bool != 0) {
		@ReportReputationChange(var_33_object, var_12_object, -0.2);
		var_10_bool = true;
		return 4;
	}
	var_10_bool = false;
}


void func_1540(void)
{
	bool var_49_bool;
	@ClearSubContainer(0);
	func_1510(600, 1500);
	int var_48_int;
	@irand(var_48_int, 200);
	if(var_48_int != 0) {
		int var_74_int;
		func_1577(var_74_int, "ognemet_ammo");
		@AddItem(var_49_bool, var_74_int, 0, var_48_int);
	}
	@irand(var_48_int, 3);
	if(var_48_int == 0) {
		int var_82_int;
		func_1577(var_82_int, "rusk");
		@AddItem(var_49_bool, var_82_int, 0, 1);
	}
}


// @pe
void func_0(bool var_276_bool, object var_277_object)
{
	bool var_280_bool; object var_281_object;
	func_76(var_276_bool, var_281_object, var_280_bool, var_281_object, (float)350, (float)5000, false, true);
	var_280_bool = var_276_bool;
}


void func_1285(bool var_24_bool, object var_25_object)
{
	bool var_27_bool;
	var_25_object->IsDead(var_27_bool);
	var_27_bool = var_24_bool;
}


// @pe
void func_1800(object var_95_object)
{
	object var_96_object;
	func_1760(var_96_object, var_96_object);
}


void func_905(object var_87_object)
{
	cvector var_98_cvector; cvector var_99_cvector; cvector var_100_cvector; cvector var_101_cvector; string var_102_string; object var_103_object; bool var_104_bool; bool var_105_bool; float var_106_float; cvector var_107_cvector;
	if(var_87_object == null) {
		func_992("fdie");
	} else {
		var_87_object->GetPosition(var_98_cvector);
		@GetPosition(var_99_cvector);
		@GetDirection(var_100_cvector);
		var_101_cvector = var_99_cvector - var_98_cvector;
		var_112_float = GetByIndex(var_101_cvector, 0);
		var_113_float = GetByIndex(var_100_cvector, 0);
		var_115_float = GetByIndex(var_101_cvector, 2);
		var_116_float = GetByIndex(var_100_cvector, 2);
		if(((var_112_float * var_113_float) + (var_115_float * var_116_float)) >= 0)
			var_102_string = "fdie";
		else
			var_102_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_87_object = var_103_object;
		var_123_bool = IsFuncExist(var_87_object, "GetScriptProperty", 2);
		if(var_123_bool != 0) {
			var_87_object->HasScriptProperty(var_104_bool, "Owner");
			if(var_104_bool != 0) {
				var_87_object->GetScriptProperty(var_103_object, "Owner");
				if(var_103_object == null)
					var_87_object = var_103_object;
			}
		}
		var_130_bool = IsFuncExist(var_103_object, "@GetEyesHeight", 1);
		if(var_130_bool != 0) {
			var_103_object->GetEyesHeight(var_106_float);
			var_107_cvector = [0.0, 0.0, 0.0];
			var_131_float = GetByIndex(var_107_cvector, 1);
			var_106_float = var_131_float;
			SetByIndex(var_107_cvector, 1) = var_131_float;
			@LookAsync(var_87_object, "head", var_107_cvector);
			var_105_bool = true;
		} else {
			var_105_bool = false;

		}
		@PlayAnimation("all", var_102_string);
		@WaitForAnimEnd();
		if(var_105_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_102_string);
		@RemoveEnvelope();
		var_103_object = null;
	}
	
}


void func_1290(bool var_13_bool, object var_14_object)
{
	if(var_14_object == null) {
		var_13_bool = false;
		return 4;
	}
	bool var_20_bool = false;
	var_23_bool = IsFuncExist(var_14_object, "IsDead", 1);
	if(var_23_bool != 0) {
		bool var_24_bool; object var_25_object;
		var_14_object = var_25_object;
		func_1285(var_24_bool, var_25_object);
		if(var_24_bool != 0)
			var_20_bool = true;
	}
	if(var_20_bool != 0) {
		var_13_bool = false;
		return 4;
	}
	object var_17_object;
	@GetScene(var_17_object);
	if(var_17_object == null) {
		var_13_bool = false;
		return 4;
	}
	object var_18_object;
	var_14_object->GetScene(var_18_object);
	if(var_17_object != var_18_object) {
		var_13_bool = false;
		return 4;
	}
	var_13_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_11(bool var_302_bool, object var_303_object)
{
	object var_305_object;
	var_303_object = var_305_object;
	bool var_304_bool;
	func_1350(var_304_bool, var_305_object);
	var_304_bool = var_302_bool;
}


// @pe
void func_1806(bool var_9_bool, object var_10_object)
{
	object var_12_object;
	var_10_object = var_12_object;
	bool var_11_bool;
	func_2048(var_11_bool, var_12_object);
	var_11_bool = var_9_bool;
}


// @pe
void func_398(bool var_170_bool, object var_171_object)
{
	object var_173_object;
	var_171_object = var_173_object;
	bool var_172_bool;
	func_1326(var_172_bool, var_173_object);
	var_172_bool = var_170_bool;
}


void func_1679(cvector var_221_cvector)
{
	cvector var_227_cvector; bool var_231_bool;
	@GetPosition(var_227_cvector);
	float var_228_float;
	@GetHeight(var_228_float);
	var_232_float = GetByIndex(var_227_cvector, 1);
	SetByIndex(var_227_cvector, 1) = (var_232_float + (var_228_float / 2));
	cvector var_229_cvector = var_221_cvector - var_227_cvector;
	float var_230_float = sqrt(var_229_cvector | var_229_cvector);
	if(var_230_float < 50) {
		var_231_bool = false;
	} else {
			var_242_float = GetByIndex(var_229_cvector, 1);
			var_231_bool = (var_242_float / var_230_float) < -0.14285715;
	}
	if(var_231_bool != 0)
		var_240_string = "cattack";
	else
		var_241_string = "attack";

	@PlayAnimation("all", var_240_string);
	
}


void func_657(void)
{
	int var_63_int; int var_64_int; bool var_65_bool; float var_66_float; bool var_67_bool;
	@WaitForAnimEnd();
	bool var_68_bool;
	func_1451(var_68_bool);
	if(!var_68_bool) //@nz
		return 14;
	int var_72_int;
	func_1493(var_72_int);
	int var_61_int;
	var_72_int = var_61_int;
	int var_62_int = 0;
	
	for(;;) {
		bool var_85_bool = false;
		if(var_62_int < 5) {
			bool var_88_bool;
			func_1451(var_88_bool);
			if(var_88_bool != 0)
				var_85_bool = true;
		}
		if(var_85_bool != 0) {
			@irand(var_63_int, 3);
			if(var_63_int == 0) {
				if(var_61_int == 0) goto Label_704;
				@irand(var_64_int, var_61_int);
				string var_94_string; int var_95_int;
				var_64_int = var_95_int;
				func_1486(var_94_string, var_95_int);
				@PlayAnimation("all", var_94_string);
				@WaitForAnimEnd(var_65_bool);
				if(!var_65_bool) { //@nz
				} else {
			} else {
			if(var_63_int == 1) {
				@rand(var_66_float, 4);
				@Sleep((var_66_float + 1), var_67_bool);
				if(!var_67_bool) { //@nz
					goto Label_725;
				}
			} else if(var_62_int != 0) {
				goto Label_725;
			}
			}
				var_62_int += 1;
			}
		}
	Label_725:
		return 14;

	}
	
}


// @pe
void func_1813(object var_95_object)
{
	object var_96_object;
	func_1760(var_96_object, var_96_object);
}


void func_405(string var_188_string)
{
	var_188_string = "walk";
}


void func_407(string var_189_string)
{
	var_189_string = "run";
}


void func_1819(bool var_352_bool, object var_353_object)
{
	bool var_356_bool = true;
	bool var_357_bool = true;
	var_358_bool = var_353_object == null; //@ne
	if(var_358_bool != 1) {
		bool var_359_bool; object var_360_object;
		var_353_object = var_360_object;
		func_1285(var_359_bool, var_360_object);
		var_361_bool = !var_359_bool; //@nz
		if(var_361_bool != 1)
			var_357_bool = false;
	}
	if(var_357_bool != 1) {
		bool var_362_bool; object var_363_object;
		var_353_object = var_363_object;
		func_1209(var_362_bool, var_363_object, "disease");
		var_365_bool = !var_362_bool; //@nz
		if(var_365_bool != 1)
			var_356_bool = false;
	}
	if(var_356_bool != 0)
		var_352_bool = false;
	float var_355_float;
	var_353_object->GetProperty("disease", var_355_float);
	var_352_bool = var_355_float > 0;
}


// @pe
void func_1193(string var_74_string, int var_75_int)
{
	if(var_75_int == 1)
		var_74_string = "fire";
	var_74_string = "phys";
}


void func_1577(int var_74_int, string var_75_string)
{
	int var_77_int;
	@GetInvItemByName(var_77_int, var_75_string);
	var_77_int = var_74_int;
}


void func_1963(int var_9_int)
{
	object var_19_object; bool var_20_bool; float var_21_float; float var_22_float; float var_23_float;
	if(var_9_int != 70)
		return 14;
	var_26_object = GlobalVars[0];
	if(var_26_object == null)
		return 14;
	var_28_object = GlobalVars[0];
	object var_17_object;
	float var_18_float;
	var_28_object->Intersect(var_17_object, var_18_float);
	var_29_object = GlobalVars[0];
	var_30_bool = GlobalVars[3];
	if(var_30_bool != 0) {
		float var_31_float; float var_32_float; float var_33_float;
		var_18_float = var_32_float;
		var_34_float = GlobalVars[2];
		var_34_float = var_33_float;
		func_1462(var_31_float, var_32_float, var_33_float);
	} else {
					var_113_float = 0.05;
	}
	var_29_object->SetLength(var_31_float);
	
	for(;;) {
		var_17_object->Next(var_20_bool, var_19_object);
		if(var_20_bool != 0) {
			bool var_37_bool = false;
			if(var_19_object != null) {
				object var_39_object;
				func_1456(var_39_object);
				if(var_19_object != var_39_object)
					var_37_bool = true;
			}
			if(var_37_bool != 0) {
				float var_43_float; object var_44_object;
				var_19_object = var_44_object;
				func_1221(var_43_float, var_44_object, 0.1, 1);
				var_43_float = var_21_float;
				bool var_98_bool; object var_99_object;
				var_19_object = var_99_object;
				func_1209(var_98_bool, var_99_object, "disease");
				if(var_98_bool != 0) {
					var_19_object->GetProperty("disease", var_22_float);
					if(var_22_float <= 0.02)
						var_22_float = 0;
					else
						var_22_float -= 0.02;
				return 14;

				}
				var_19_object->SetProperty("disease", var_22_float);
			}
			bool var_105_bool; object var_106_object;
			var_19_object = var_106_object;
			func_1209(var_105_bool, var_106_object, "fire");
			if(var_105_bool != 0) {
				var_19_object->GetProperty("fire", var_23_float);
				var_19_object->SetProperty("fire", (var_23_float + 0.1));
			}
		}
	}
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-7] = 0";


void func_1451(bool var_68_bool)
{
	bool var_70_bool;
	@IsLoaded(var_70_bool);
	var_70_bool = var_68_bool;
}


void func_1326(bool var_9_bool, object var_10_object)
{
	object var_14_object;
	var_10_object = var_14_object;
	bool var_13_bool;
	func_1290(var_13_bool, var_14_object);
	if(!var_13_bool) { //@nz
		var_9_bool = false;
		return 2;
	}
	bool var_31_bool; object var_32_object;
	func_1209(var_31_bool, var_32_object, "noaccess");
	if(!var_31_bool) { //@nz
		var_9_bool = true;
		return 2;
	}
	int var_12_int;
	var_32_object->GetProperty("noaccess", var_12_int);
	var_9_bool = var_12_int == 0;
}


void func_1582(void)
{
	var_14_object = GlobalVars[4];
	object var_15_object;
	func_1480(var_15_object);
	var_15_object = var_14_object;
	GlobalVars[4] = var_14_object;
	float var_11_float;
	@GetAttackDistance(var_11_float);
	var_18_float = GlobalVars[2];
	GlobalVars[2] = (var_11_float / 600.0);
	object var_12_object;
	@GetScene(var_12_object);
	object var_13_object;
	@AddActorByType(var_13_object, "flame", var_12_object, [0.0, 0.0, 0.0]);
	object var_22_object;
	func_1456(var_22_object);
	var_13_object->Attach(var_22_object, "flame");
	var_26_bool = GlobalVars[3];
	GlobalVars[3] = false;
	var_13_object->SetLength(0.05);
	var_28_object = GlobalVars[0];
	var_13_object = var_28_object;
	GlobalVars[0] = var_28_object;
	@SetTimer(70, 0.1);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_560(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_1201(float var_119_float, object var_120_object)
{
	cvector var_124_cvector;
	@GetPosition(var_124_cvector);
	cvector var_125_cvector;
	var_120_object->GetPosition(var_125_cvector);
	var_119_float = (var_125_cvector - var_124_cvector) | (var_125_cvector - var_124_cvector);
}


// @pe
void func_178(bool var_0_bool, object var_1_object, int var_9_int)
{
	if(var_9_int != 0)
		return 0;
	bool var_12_bool;
	func_11(var_12_bool, var_1_object);
	if(!var_12_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1710(object var_210_object)
{
	cvector var_213_cvector; float var_214_float;
	var_210_object->GetPosition(var_213_cvector);
	var_217_bool = IsFuncExist(var_210_object, "@GetHeight", 1);
	if(var_217_bool != 0) {
		var_210_object->GetHeight(var_214_float);
		var_218_float = GetByIndex(var_213_cvector, 1);
		SetByIndex(var_213_cvector, 1) = (var_218_float + (var_214_float / 2));
	}
	cvector var_221_cvector;
	var_213_cvector = var_221_cvector;
	func_1679(var_221_cvector);
}


void func_1456(object var_22_object)
{
	object var_24_object;
	@self(var_24_object);
	var_24_object = var_22_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1462(float var_31_float, float var_32_float, float var_33_float)
{
	if(var_32_float < var_33_float)
		var_32_float = var_31_float;
	else
		var_33_float = var_31_float;
	
}


void func_1209(bool var_59_bool, object var_60_object, string var_61_string)
{
	var_66_bool = IsFuncExist(var_60_object, "HasProperty", 2);
	if(!var_66_bool) { //@nz
		var_59_bool = false;
		return 2;
	}
	bool var_63_bool;
	var_60_object->HasProperty(var_61_string, var_63_bool);
	var_63_bool = var_59_bool;
}


// @pe
void func_1851(object var_368_object)
{
	TaskCall(6);
	object var_369_object;
	func_1020(var_369_object, var_369_object);
	TaskReturn();
	@ResetAAS();
}


// @pe
void func_1469(float var_91_float, float var_92_float, float var_93_float, float var_94_float)
{
	if(var_92_float < var_93_float) {
		var_93_float = var_91_float;
		return 0;
	}
	if(var_92_float > var_94_float) {
		var_94_float = var_91_float;
		return 0;
	}
	var_92_float = var_91_float;
}


void func_576(bool var_52_bool)
{
	var_52_bool = false;
}


void func_1729(bool var_102_bool, object var_103_object)
{
	bool var_108_bool; object var_109_object;
	func_1326(var_108_bool, var_109_object);
	if(!var_108_bool) { //@nz
		var_102_bool = false;
		return 4;
	}
	var_111_object = GlobalVars[4];
	bool var_106_bool;
	var_111_object->in(var_106_bool, var_109_object);
	if(var_106_bool != 0) {
		var_102_bool = true;
		return 4;
	}
	bool var_113_bool; object var_114_object;
	func_1209(var_113_bool, var_114_object, "disease");
	if(!var_113_bool) { //@nz
		var_102_bool = false;
		return 4;
	}
	float var_107_float;
	var_114_object->GetProperty("disease", var_107_float);
	var_102_bool = var_107_float > 0;
}


void func_1861(object var_44_object)
{
	if(var_44_object == null)
		return 4;
	var_50_object = GlobalVars[4];
	bool var_47_bool;
	var_50_object->in(var_47_bool, var_44_object);
	if(!var_47_bool) { //@nz
		var_52_object = GlobalVars[4];
		var_52_object->add(var_44_object);
	}
	bool var_48_bool;
	@IsPlayerActor(var_44_object, var_48_bool);
	if(var_48_bool != 0) {
	}
}


void func_1350(bool var_246_bool, object var_247_object)
{
	if(var_247_object == null) {
		var_246_bool = false;
		return 6;
	}
	object var_251_object;
	@GetScene(var_251_object);
	if(var_251_object == null) {
		var_246_bool = false;
		return 6;
	}
	object var_252_object;
	var_247_object->GetScene(var_252_object);
	if(var_251_object != var_252_object) {
		var_246_bool = false;
		return 6;
	}
	bool var_257_bool; object var_258_object;
	func_1209(var_257_bool, var_258_object, "noaccess");
	if(!var_257_bool) { //@nz
		var_246_bool = true;
		return 6;
	}
	int var_253_int;
	var_258_object->GetProperty("noaccess", var_253_int);
	var_246_bool = var_253_int == 0;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1221(float var_43_float, object var_44_object, float var_45_float, int var_46_int)
{
	int var_53_int; int var_55_int;
	object var_60_object;
	var_44_object = var_60_object;
	bool var_59_bool;
	func_1209(var_59_bool, var_60_object, "health");
	if(!var_59_bool) //@nz
		var_43_float = 0.0;
	bool var_69_bool; object var_70_object;
	func_1209(var_69_bool, var_70_object, "armor");
	if(!var_69_bool) //@nz
		var_53_int = 0;
	else
		var_70_object->GetProperty("armor", var_53_int);
	string var_74_string; int var_75_int;
	var_46_int = var_75_int;
	func_1193(var_74_string, var_75_int);
	string var_54_string = "armor_" + var_74_string;
	bool var_78_bool; object var_79_object; string var_80_string;
	var_44_object = var_79_object;
	func_1209(var_78_bool, var_79_object, var_80_string);
	if(!var_78_bool) //@nz
		var_55_int = 0;
	else
		var_44_object->GetProperty(var_80_string, var_55_int);

	float var_82_float;
	func_1462(var_82_float, ((var_53_int + var_55_int) / 100.0), (float)1);
	float var_56_float;
	var_82_float = var_56_float;
	float var_57_float;
	var_44_object->GetProperty("health", var_57_float);
	float var_91_float;
	func_1469(var_91_float, (var_57_float - (var_45_float * (1 - var_56_float))), (float)0, (float)1);
	var_44_object->SetProperty("health", var_91_float);
	float var_58_float = var_43_float;
	
}


void func_200(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1480(object var_15_object)
{
	object var_17_object;
	@CreateObjectSet(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_76(bool var_0_bool, object var_1_object, bool var_280_bool, object var_281_object, float var_282_float, float var_283_float, bool var_284_bool, bool var_285_bool)
{
	bool var_294_bool; object var_296_object; cvector var_297_cvector; cvector var_298_cvector; float var_300_float; object var_301_object;
	var_0_bool = false;
	var_1_object = var_281_object;
	bool var_295_bool;
	var_285_bool = var_295_bool;
	
	for(;;) {
		bool var_302_bool; object var_303_object;
		var_281_object = var_303_object;
		func_11(var_302_bool, var_303_object);
		if(!var_302_bool) { //@nz
			var_280_bool = false;
			return 16;
		}
		var_281_object->GetPosition(var_297_cvector);
		@GetPosition(var_298_cvector);
		var_300_float = (var_297_cvector - var_298_cvector) | (var_297_cvector - var_298_cvector);
		bool var_307_bool = false;
		if(var_283_float > 0) {
			if(var_300_float > (var_283_float * var_283_float))
				var_307_bool = true;
		}
		if(var_307_bool != 0) {
			@Stop();
			var_280_bool = false;
			return 16;
		}
		if(var_300_float > (var_282_float * var_282_float)) {
			var_281_object->GetPFPosition(var_297_cvector);
			@FindPathTo(var_301_object, var_297_cvector);
			if(var_301_object != null) {
				var_301_object = var_296_object;
				var_301_object = null;
			}
			if(var_296_object != null) {
				if(var_295_bool == 0) goto Label_129;
				var_295_bool = false;
				@RotatePath(var_296_object, var_294_bool);
				if(!var_294_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_320_string;
						func_216(var_320_string);
						string var_321_string;
						func_218(var_321_string);
						@FollowPath(var_296_object, var_284_bool, var_294_bool, var_320_string, var_321_string);
						if(!var_294_bool) { //@nz
							if(var_0_bool == 0) goto Label_148;
							var_296_object = null;
						}
					EMIT "GOTO 0x95";

					Label_148:
						} else {
					var_296_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_294_bool);
					if(!var_294_bool) { //@nz
						if(var_0_bool != 0) {
							var_296_object = null;
							goto Label_176;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_176;
		}
			var_301_object = null;
			goto Label_174;

		Label_174:
			var_296_object = null;

		}
	Label_176:
		for(;;) {
			var_280_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1486(string var_78_string, int var_79_int)
{
	string var_81_string = "idle";
	if(var_79_int != 0)
		var_81_string += var_79_int;
	var_81_string = var_78_string;
}


void func_1493(int var_72_int)
{
	int var_75_int; bool var_76_bool;
	var_75_int = 0;
	
	for(;;) {
		string var_78_string; int var_79_int;
		var_75_int = var_79_int;
		func_1486(var_78_string, var_79_int);
		@HasAnimation(var_76_bool, "all", var_78_string);
		if(!var_76_bool) //@nz
			break;
		var_75_int += 1;
	}
	var_75_int = var_72_int;
}


// @pe
void func_1878(object var_87_object)
{
	object var_88_object;
	var_87_object = var_88_object;
	func_1861(var_88_object);
	object var_89_object;
	func_1760(var_89_object, var_89_object);
}


void func_726(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_216(string var_320_string)
{
	var_320_string = "walk";
}


void func_1623(bool var_12_bool)
{
	float var_18_float; object var_20_object; cvector var_21_cvector; float var_22_float;
	if(var_12_bool != 0) {
		var_24_float = GlobalVars[2];
		var_24_float = var_18_float;
	} else {
				var_18_float = 0.05;
	}
	var_25_object = GlobalVars[0];
	float var_19_float;
	var_25_object->GetLength(var_19_float);
	if(var_18_float < var_19_float)
		var_18_float = var_19_float;
	var_27_object = GlobalVars[0];
	var_27_object->SetLength(var_19_float);
	var_28_bool = GlobalVars[3];
	if(var_28_bool != var_12_bool) {
		if(var_12_bool != 0) {
			var_31_object = GlobalVars[1];
			if(var_31_object == null) {
				var_21_cvector = [0.0, 0.0, 0.0];
				@GetHeight(var_22_float);
				var_33_float = GetByIndex(var_21_cvector, 1);
				var_22_float = var_33_float;
				SetByIndex(var_21_cvector, 1) = var_33_float;
				@PlayLoopedGlobalSound(var_20_object, "flame_loop", var_21_cvector, 0, 200);
				var_37_object = GlobalVars[1];
				var_20_object = var_37_object;
				GlobalVars[1] = var_37_object;
				var_20_object = null;
			}
			var_38_object = GlobalVars[1];
			var_38_object->FadeIn(2);
		} else {
			var_41_object = GlobalVars[1];
			if(!(var_41_object != null)) goto Label_1675;
			var_43_object = GlobalVars[1];
			var_43_object->FadeOut(2);

		}
	Label_1675:
		var_40_bool = GlobalVars[3];
		var_12_bool = var_40_bool;
		GlobalVars[3] = var_40_bool;
	}
	
}


void func_218(string var_321_string)
{
	var_321_string = "run";
}


void func_731(bool var_0_bool, object var_90_object, object var_91_object, bool var_145_bool)
{
	bool var_96_bool; float var_97_float; object var_98_object;
	var_0_bool = var_91_object;
	@Face(var_91_object);
	@SetAttackState(true);
	
	for(;;) {
		bool var_100_bool;
		func_2048(var_100_bool, var_0_bool);
		if(var_100_bool != 0) {
			float var_119_float;
			func_1201(var_119_float, var_0_bool);
			var_119_float = var_97_float;
			if(var_97_float <= 90000.0) {
				if(!false) { //@nz
					@SetAttackState(true);
					func_1623(true);
					@PlayAnimation("all", "attack_on");
					var_96_bool = true;
				} else {
				@PlayAnimation("all", "bjump");
			}
			if(var_97_float >= 490000.0) {
				if(var_96_bool != 0) {
					@SetAttackState(false);
					func_1623(false);
					@PlayAnimation("all", "attack_off");
				} else {
					@StopAsync();
					object var_143_object;
					TaskCall(1);
					func_220(var_147_object, var_143_object, var_0_bool);
					TaskReturn();
					var_145_bool = var_98_object;
					var_0_bool = var_98_object;
					if(var_0_bool == null) {
					} else {
						@Face(var_0_bool);
						var_98_object = null;
			}
					if(!false) { //@nz
						@SetAttackState(true);
						func_1623(true);
						@PlayAnimation("all", "attack_on");
						var_96_bool = true;
						goto Label_826;
					}
					func_1710(var_0_bool);
				}
		}
			@SetAttackState(false);
			@PlayAnimation("all", "attack_off");
			func_1623(false);
			@StopAsync();
			var_90_object = var_0_bool;
		}
		goto Label_826;
		}
		goto Label_826;

	Label_826:
		@WaitForAnimEnd();
		@ReportAttack(var_0_bool);
	}
	
}


// @pe
void func_220(bool var_2_bool, object var_143_object, object var_144_object)
{
	var_2_bool = var_144_object;
	bool var_148_bool; object var_149_object;
	func_258(var_143_object, var_149_object, var_148_bool, var_149_object, 500.0, (float)5000, false, true);
	if(!var_148_bool) //@nz
		var_2_bool = null;
	var_143_object = var_2_bool;
}


// @pe
void func_863(object var_10_object)
{
	@KillTimer(70);
	func_1623(false);
	var_45_object = GlobalVars[0];
	@RemoveActor(var_45_object);
	func_1540();
	object var_86_object;
	var_10_object = var_86_object;
	func_882(var_86_object);
}


// @pe
void func_992(string var_109_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_109_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_109_string);
	@RemoveEnvelope();
}


void func_1121(void)
{
	func_1623(false);
	@Stop();
	@StopAsync();
}


// @pe
void func_1760(object var_89_object, object var_92_object)
{
	object var_91_object;
	var_89_object = var_91_object;
	TaskCall(4);
	object var_90_object;
	func_731(var_89_object, var_92_object, var_90_object, var_91_object);
	TaskReturn();
	var_92_object = var_89_object;
	@ResetAAS();
	bool var_245_bool = false;
	bool var_246_bool; object var_247_object;
	var_89_object = var_247_object;
	func_1350(var_246_bool, var_247_object);
	if(var_246_bool != 0) {
		bool var_263_bool; object var_264_object;
		var_89_object = var_264_object;
		func_1285(var_263_bool, var_264_object);
		if(var_263_bool != 0)
			var_245_bool = true;
	}
	if(var_245_bool != 0) {
		object var_265_object;
		TaskCall(6);
		func_1020(var_265_object, var_265_object);
		TaskReturn();
		@ResetAAS();
	}
}


// @pe
void func_1888(object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	TaskCall(5);
	func_863(var_10_object);
	TaskReturn();
}


void func_1510(int var_51_int, int var_52_int)
{
	int var_58_int;
	if(var_51_int > var_52_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_57_int = 0;
	if(var_51_int != var_52_int) {
		@irand(var_58_int, (var_52_int - var_51_int));
	} else if(var_51_int == 0) {
		return 8;
	}
	var_57_int += var_51_int;
	if(var_57_int == 0)
		return 8;
	int var_59_int;
	@GetInvItemByName(var_59_int, "Money");
	bool var_60_bool;
	@AddItem(var_60_bool, var_59_int, 0, var_57_int);
	
}


// @pe
void func_360(bool var_0_bool, object var_1_object, int var_9_int)
{
	if(var_9_int != 0)
		return 0;
	bool var_12_bool;
	func_398(var_12_bool, var_1_object);
	if(!var_12_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1384(object var_12_object, int var_13_int)
{
	object var_25_object; object var_26_object; cvector var_27_cvector; float var_28_float; string var_34_string;
	bool var_35_bool = false;
	if(var_13_int != 4) {
		if(var_13_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		@GetScene(var_25_object);
		@GetPosition(var_27_cvector);
		@GetEyesHeight(var_28_float);
		var_40_float = GetByIndex(var_27_cvector, 1);
		SetByIndex(var_27_cvector, 1) = (var_40_float + (var_28_float / 2));
		@AddActorByType(var_26_object, "scripted", var_25_object, var_27_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_26_object = null;
		var_25_object = null;
	}
	if(var_12_object == null)
		return 20;
	int var_29_int;
	@GetSecondaryAnimationType(var_29_int);
	if(var_29_int < 0)
		return 20;
	cvector var_30_cvector;
	var_12_object->GetPosition(var_30_cvector);
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	@GetDirection(var_32_cvector);
	cvector var_33_cvector = var_31_cvector - var_30_cvector;
	var_49_float = GetByIndex(var_33_cvector, 0);
	var_50_float = GetByIndex(var_32_cvector, 0);
	var_52_float = GetByIndex(var_33_cvector, 2);
	var_53_float = GetByIndex(var_32_cvector, 2);
	if(((var_49_float * var_50_float) + (var_52_float * var_53_float)) >= 0)
		var_34_string = "fhit";
	else
		var_34_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_34_string + "1"), (var_34_string + "2"), -10);
	
}


void func_496(bool var_0_bool, object var_1_object)
{
	float var_38_float; cvector var_39_cvector; cvector var_40_cvector; float var_41_float; bool var_42_bool; object var_43_object; bool var_44_bool;
	@rand(var_38_float, 0.5);
	@Sleep(var_38_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_508:
				@GetPosition(var_40_cvector);
				@GetCameraFarDistance(var_41_float);
				@GetRandomPFPointInCircle(var_39_cvector, var_40_cvector, (var_41_float * 2.5), var_42_bool);
				if(var_42_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_508;
			}
				var_1_object = false;
		}
		}
		goto Label_525;

	Label_525:
		@FindShiftedPathTo(var_43_object, var_39_cvector);
		if(var_43_object != null) {
			@RotatePath(var_43_object, var_44_bool);
			if(var_44_bool != 0) {
				bool var_52_bool;
				func_576(var_52_bool);
				@FollowPath(var_43_object, var_52_bool, var_44_bool);
				var_43_object = null;
				if(var_44_bool != 0) {
					TaskCall(3);
					func_657();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_43_object = null;
	}
	
}


// @pe
void func_882(object var_86_object)
{
	object var_87_object;
	var_86_object = var_87_object;
	func_905(var_87_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1020(object var_265_object, bool var_278_bool)
{
	float var_270_float; float var_271_float;
	object var_273_object;
	var_265_object = var_273_object;
	bool var_272_bool;
	func_1209(var_272_bool, var_273_object, "disease");
	if(!var_272_bool) //@nz
		return 6;
	bool var_276_bool; object var_277_object;
	TaskCall(0);
	func_0(var_276_bool, var_277_object);
	TaskReturn();
	if(!var_278_bool) //@nz
		return 6;
	@Face(var_277_object);
	bool var_269_bool;
	@WaitForAnimEnd(var_269_bool);
	if(var_269_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd(var_269_bool);
		if(var_269_bool != 0) {
			func_1623(true);

			for(;;) {
				@PlayAnimation("all", "cattack");
				@WaitForAnimEnd(var_269_bool);
				bool var_339_bool = true;
				var_340_bool = !var_269_bool; //@nz
				if(var_340_bool != 1) {
					bool var_341_bool; object var_342_object;
					var_265_object = var_342_object;
					func_1350(var_341_bool, var_342_object);
					var_343_bool = !var_341_bool; //@nz
					if(var_343_bool != 1)
						var_339_bool = false;
				}
				if(var_339_bool != 0) {
				} else {
						var_265_object->GetProperty("disease", var_270_float);
						if(!(var_270_float <= 0.02)) goto Label_1086;
						var_265_object->SetProperty("disease", 0.0);
				}
				for(;;) {
					func_1623(false);
					if(var_269_bool != 0) {
						@PlayAnimation("all", "attack_off");
						@WaitForAnimEnd();
					}
		}
	}
			@StopAsync();
			return 6;

		}

	Label_1086:
		var_265_object->SetProperty("disease", (var_270_float - 0.02));
		bool var_356_bool; object var_357_object;
		var_265_object = var_357_object;
		func_1209(var_356_bool, var_357_object, "fire");
		if(var_356_bool != 0) {
			var_265_object->GetProperty("fire", var_271_float);
			var_265_object->SetProperty("fire", (var_271_float + 0.1));
		}
	}
}


void func_382(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


