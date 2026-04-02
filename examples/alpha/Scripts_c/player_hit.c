// @GLOBALS: 0:bool:

maintask task_0
{
	void init(float var_0_float, float var_1_float)
	{
		var_2_bool = GlobalVars[0];
		GlobalVars[0] = true;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, float var_4_float, float var_5_float)
	{
		if(var_3_float != 5) {
			object var_8_object; int var_9_int; float var_10_float;
			fDamage = var_8_object;
			var_3_float = var_9_int;
			var_4_float = var_10_float;
			func_292(var_9_int, var_10_float);
			float var_99_float;
			var_4_float = var_99_float;
			TaskCall(1);
			func_24(var_100_float, var_101_float, var_99_float);
			TaskReturn();
		}
	}

}


task task_1
{
	void OnHit(float var_0_float, float var_1_float, object var_2_object, int var_3_int, float var_4_float, float var_5_float)
	{
		object var_8_object;
		var_2_object = var_8_object;
		int var_9_int;
		var_3_int = var_9_int;
		float var_10_float;
		var_4_float = var_10_float;
		func_292(var_9_int, var_10_float);
		float var_99_float; float var_100_float;
		var_4_float = var_100_float;
		func_166(var_99_float, var_100_float);
		float var_7_float;
		var_99_float = var_7_float;
		if(var_1_float < var_0_float) {
			if(var_7_float > var_0_float)
				var_1_float = var_7_float;
		} else if(var_7_float > var_1_float) {
			var_1_float = var_7_float;
		}
	
	}

}


// @pe
void OnTimer(float var_0_float, float fTime, int var_2_int)
{
	if(var_2_int == 0) {
		var_5_bool = GlobalVars[0];
		GlobalVars[0] = true;
		@KillTimer(0);
	}
}


// @pe
void func_227(int var_13_int)
{
	if(var_13_int == 0) {
		func_190("hit_physical1");
		func_216("scream_physical1");
	} else if(var_13_int == 1) {
			func_190("hit_physical2");
			func_216("scream_physical2");
	}
Label_291:
	for(;;) {
		return 0;

	}
	
	if(var_13_int == 2) {
		func_190("hit_bullet");
		func_216("scream_bullet");
	} else if(var_13_int == 3) {
		func_190("hit_oscoloc");
		func_216("scream_oscoloc");
	} else if(var_13_int == 6) {
		func_190("hit_mental");
		func_216("scream_mental");
	}
	if(!(var_13_int == 4)) goto Label_291;
}


void func_292(object var_8_object, int var_9_int)
{
	cvector var_12_cvector;
	int var_13_int;
	var_9_int = var_13_int;
	func_227(var_13_int);
	bool var_68_bool = false;
	if(var_9_int != 5) {
		if(var_9_int != 6)
			var_68_bool = true;
	}
	if(var_68_bool != 0) {
		bool var_73_bool = false;
		object var_74_object;
		func_118(var_74_object);
		if(var_8_object != var_74_object) {
			var_80_bool = IsFuncExist(var_8_object, "GetPosition", 1);
			if(var_80_bool != 0)
				var_73_bool = true;
		}
		if(var_73_bool != 0) {
			@GetSpeed(var_12_cvector);
			cvector var_81_cvector; cvector var_82_cvector;
			cvector var_83_cvector; object var_84_object;
			var_8_object = var_84_object;
			func_111(var_83_cvector, var_84_object);
			var_83_cvector = var_82_cvector;
			func_124(var_81_cvector, var_82_cvector);
			var_12_cvector -= (var_81_cvector * 400);
			if((var_12_cvector | var_12_cvector) < 160000)
				@SetSpeed(var_12_cvector);
		}
	}
}


// @pe
void func_134(float var_101_float, float var_102_float, float var_103_float, float var_104_float)
{
	if(var_102_float < var_103_float) {
		var_103_float = var_101_float;
		return 0;
	}
	if(var_102_float > var_104_float) {
		var_104_float = var_101_float;
		return 0;
	}
	var_102_float = var_101_float;
}


// @pe
void func_166(float var_99_float, float var_100_float)
{
	float var_102_float = sqrt(var_100_float);
	float var_101_float;
	func_134(var_101_float, var_102_float, (float)0, (float)1);
	var_101_float = var_99_float;
}


void func_175(int var_21_int, string var_22_string)
{
	int var_26_int; bool var_27_bool;
	var_26_int = 0;
	
	for(;;) {
		@IsExistingSound(var_27_bool, (var_22_string + (var_26_int + 1)));
		if(!var_27_bool) //@nz
			break;
		var_26_int += 1;
	}
	var_26_int = var_21_int;
}


void func_111(cvector var_83_cvector, object var_84_object)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	cvector var_88_cvector;
	var_84_object->GetPosition(var_88_cvector);
	var_83_cvector = var_88_cvector - var_87_cvector;
}


void func_124(cvector var_81_cvector, cvector var_82_cvector)
{
	float var_90_float = sqrt(var_82_cvector | var_82_cvector);
	if(var_90_float < 0.000001)
		var_81_cvector = [0.0, 0.0, 0.0];
	var_81_cvector = var_82_cvector / var_90_float;
}


// @pe
void func_340(float var_128_float, float var_129_float, bool var_130_bool)
{
	@ModDarkenLevel(var_128_float);
	@ModBlurLevel(var_128_float);
	if(var_130_bool != 0)
		@SetCameraFOV(var_129_float * (1 + (var_128_float * 0.1)));
}


void func_118(object var_74_object)
{
	object var_76_object;
	@self(var_76_object);
	var_76_object = var_74_object;
}
EMIT "Stack[-1] = 0";


void func_24(object var_0_object, int var_1_int, float var_99_float)
{
	float var_109_float;
	var_0_object = 0.0;
	float var_106_float;
	var_99_float = var_106_float;
	if(var_106_float < 0.2)
		var_106_float = 0.2;
	float var_112_float;
	func_166(var_112_float, (2.0 * var_106_float));
	var_1_int = var_112_float;
	bool var_107_bool;
	@LockCameraFOV(var_107_bool);
	float var_108_float;
	@GetCameraCurrentFOV(var_108_float);
	
	for(;;) {
		@sync(var_109_float);
		if(var_1_int < var_0_object) {
			var_0_object -= ((var_109_float * 2.0) / 2);
			if(var_0_object <= 0) {
				float var_129_float; bool var_130_bool;
				var_108_float = var_129_float;
				var_107_bool = var_130_bool;
				func_340((float)0, var_129_float, var_130_bool);
			} else {
		} else {
		var_0_object += (var_109_float * 2.0);
		if(!(var_0_object >= var_1_int)) goto Label_77;
		if(!var_0_object) { //@nz
			float var_146_float; bool var_147_bool;
			var_108_float = var_146_float;
			var_107_bool = var_147_bool;
			func_340((float)0, var_146_float, var_147_bool);
			goto Label_84;
		}
		var_1_int = 0;
		}
		Label_77:
			float var_139_float; bool var_140_bool;
			var_108_float = var_139_float;
			var_107_bool = var_140_bool;
			func_340(var_1_int, var_139_float, var_140_bool);
		}
	Label_84:
		if(var_107_bool != 0)
			@UnlockCameraFOV(var_107_bool);

	}
	
}


void func_156(void)
{
	var_45_bool = GlobalVars[0];
	if(var_45_bool != 0) {
		var_46_bool = GlobalVars[0];
		GlobalVars[0] = false;
		@SetTimer(0, 3.0);
	}
}


void func_190(string var_16_string)
{
	int var_20_int;
	int var_21_int;
	func_175(var_21_int, (var_16_string + "_"));
	int var_19_int;
	var_21_int = var_19_int;
	if(!var_19_int) { //@nz
		@Trace(("No sounds for \"" + var_16_string) + "\"");
	} else {
		@irand(var_20_int, var_19_int);
		@PlaySound((var_16_string + "_") + (var_20_int + 1));
	}
	
}


// @pe
void func_216(string var_43_string)
{
	var_44_bool = GlobalVars[0];
	if(var_44_bool != 0) {
		func_156();
		string var_49_string;
		var_43_string = var_49_string;
		func_190(var_49_string);
	}
}


