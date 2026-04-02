maintask task_0
{
	void init(object var_0_object)
	{
		@SetTimer(111, 1);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTimer(object var_0_object, int var_1_int)
	{
		object var_14_object;
		func_112(var_14_object);
		object var_8_object;
		var_14_object = var_8_object;
		int var_18_int;
		func_130(var_18_int);
		int var_9_int;
		var_18_int = var_9_int;
		int var_24_int;
		func_139(var_24_int);
		int var_10_int;
		var_24_int = var_10_int;
		bool var_29_bool = false;
		if(var_9_int >= 2) {
			if(var_10_int > 2)
				var_29_bool = true;
		}
		if(var_29_bool != 0) {
			object var_34_object;
			func_119(var_34_object);
			@RemoveActor(var_34_object);
			return 12;
		}
		if(var_8_object == null)
			return 12;
		cvector var_38_cvector; object var_39_object;
		var_8_object = var_39_object;
		func_107(var_38_cvector, var_39_object);
		cvector var_11_cvector;
		var_38_cvector = var_11_cvector;
		cvector var_12_cvector;
		var_42_float = GetByIndex(var_12_cvector, 0);
		SetByIndex(var_12_cvector, 0) = (float)17738;
		var_43_float = GetByIndex(var_12_cvector, 1);
		SetByIndex(var_12_cvector, 1) = (float)705;
		var_44_float = GetByIndex(var_12_cvector, 2);
		SetByIndex(var_12_cvector, 2) = (float)2229;
		int var_13_int = 0;
		@GetVariable("d1GhostCatHDPathologic", var_13_int);
		bool var_46_bool = false;
		if(var_13_int != 0) {
			bool var_49_bool = true;
			bool var_50_bool = false;
			if(var_9_int == 1) {
				if(var_10_int >= 21)
					var_50_bool = true;
			}
			if(var_50_bool != 1) {
				bool var_55_bool = false;
				if(var_9_int == 2) {
					if(var_10_int <= 2)
						var_55_bool = true;
				}
				if(var_55_bool != 1)
					var_49_bool = false;
			}
			if(var_49_bool != 0)
				var_46_bool = true;
		}
		if(var_46_bool != 0) {
			float var_60_float; cvector var_61_cvector; cvector var_62_cvector;
			var_11_cvector = var_61_cvector;
			var_12_cvector = var_62_cvector;
			func_125(var_60_float, var_61_cvector, var_62_cvector);
			if(var_60_float < 500) {
				@UnlockAchievement("ACHIEVEMENT_NOTICE");
				object var_69_object;
				func_119(var_69_object);
				@RemoveActor(var_69_object);
			}
		}
	}
	EMIT "Stack[-6] = 0";

}


void func_130(int var_18_int)
{
	float var_20_float;
	@GetGameTime(var_20_float);
	var_18_int = 1 + (var_20_float / 24);
}


void func_107(cvector var_38_cvector, object var_39_object)
{
	cvector var_41_cvector;
	var_39_object->GetPosition(var_41_cvector);
	var_41_cvector = var_38_cvector;
}


void func_139(int var_24_int)
{
	float var_26_float;
	@GetGameTime(var_26_float);
	int var_27_int;
	var_26_float = var_27_int;
	var_24_int = var_27_int % 24;
}


void func_112(object var_14_object)
{
	object var_16_object;
	@FindActor(var_16_object, "player");
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_119(object var_34_object)
{
	object var_36_object;
	@self(var_36_object);
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


void func_125(float var_60_float, cvector var_61_cvector, cvector var_62_cvector)
{
	var_60_float = sqrt((var_62_cvector - var_61_cvector) | (var_62_cvector - var_61_cvector));
}


