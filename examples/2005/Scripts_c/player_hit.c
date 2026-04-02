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
		void OnHit(object actor, int iHitType, float fDamage, float var_3_float, cvector var_4_cvector, cvector var_5_cvector, float var_6_float, float var_7_float, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
		{
		if(var_9_int != 5) {
			object var_14_object; int var_15_int; float var_16_float;
			var_8_object = var_14_object;
			var_9_int = var_15_int;
			var_10_float = var_16_float;
			func_327(var_15_int, var_16_float);
			float var_109_float;
			var_10_float = var_109_float;
			TaskCall(1);
			func_33(var_110_float, var_111_float, var_109_float);
			TaskReturn();
		}
		}

	// @pe
	void OnHit2(object actor, int iHitType, float fDamage, float var_3_float, cvector var_4_cvector, cvector var_5_cvector, float var_6_float, float var_7_float)
	{
		object var_8_object;
		fDamage = var_8_object;
		int var_9_int;
		var_3_float = var_9_int;
		float var_10_float;
		var_4_cvector = var_10_float;
		float var_11_float;
		var_5_cvector = var_11_float;
		func_7();
	}

}


task task_1
{
		void OnHit(float var_0_float, float var_1_float, object var_2_object, int var_3_int, float var_4_float, float var_5_float, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
		{
		object var_14_object;
		var_8_object = var_14_object;
			int var_15_int;
		var_9_int = var_15_int;
			float var_16_float;
		var_10_float = var_16_float;
		func_327(var_15_int, var_16_float);
		float var_109_float; float var_110_float;
		var_10_float = var_110_float;
		func_189(var_109_float, var_110_float);
			float var_13_float;
		var_109_float = var_13_float;
		if(var_1_float < var_0_float) {
			if(var_13_float > var_0_float)
				var_1_float = var_13_float;
		} else if(var_13_float > var_1_float) {
			var_1_float = var_13_float;
		}
	
		}

	// @pe
	void OnHit2(float var_0_float, float var_1_float, object var_2_object, int var_3_int, float var_4_float, float var_5_float, cvector var_6_cvector, cvector var_7_cvector)
	{
		object var_8_object;
		var_2_object = var_8_object;
		int var_9_int;
		var_3_int = var_9_int;
		float var_10_float;
		var_4_float = var_10_float;
		float var_11_float;
		var_5_float = var_11_float;
		func_103();
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


void func_33(object var_0_object, int var_1_int, float var_109_float)
{
	float var_119_float;
	var_0_object = 0.0;
	float var_116_float;
	var_109_float = var_116_float;
	if(var_116_float < 0.2) {
	}
	bool var_122_bool;
	func_390(var_122_bool);
	if(!var_122_bool) { //@nz
		float var_129_float;
		func_189(var_129_float, (2.0 * 0.2));
		var_1_int = var_129_float;
	}
	bool var_117_bool;
	@LockCameraFOV(var_117_bool);
	float var_118_float;
	@GetCameraCurrentFOV(var_118_float);
	
	for(;;) {
		@sync(var_119_float);
		if(var_1_int < var_0_object) {
			var_0_object -= ((var_119_float * 2.0) / 2);
			if(var_0_object <= 0) {
				float var_146_float; bool var_147_bool;
				var_118_float = var_146_float;
				var_117_bool = var_147_bool;
				func_375((float)0, var_146_float, var_147_bool);
			} else {
		} else {
		var_0_object += (var_119_float * 2.0);
		if(!(var_0_object >= var_1_int)) goto Label_91;
		if(!var_0_object) { //@nz
			float var_163_float; bool var_164_bool;
			var_118_float = var_163_float;
			var_117_bool = var_164_bool;
			func_375((float)0, var_163_float, var_164_bool);
			goto Label_98;
		}
		var_1_int = 0;
		}
		Label_91:
			float var_156_float; bool var_157_bool;
			var_118_float = var_156_float;
			var_117_bool = var_157_bool;
			func_375(var_1_int, var_156_float, var_157_bool);
		}
	Label_98:
		if(var_117_bool != 0)
			@UnlockCameraFOV(var_117_bool);

	}
	
}


void func_134(cvector var_93_cvector, object var_94_object)
{
	cvector var_97_cvector;
	@GetPosition(var_97_cvector);
	cvector var_98_cvector;
	var_94_object->GetPosition(var_98_cvector);
	var_93_cvector = var_98_cvector - var_97_cvector;
}


void func_198(int var_27_int, string var_28_string)
{
	int var_32_int; bool var_33_bool;
	var_32_int = 0;
	
	for(;;) {
		@IsExistingSound(var_33_bool, (var_28_string + (var_32_int + 1)));
		if(!var_33_bool) //@nz
			break;
		var_32_int += 1;
	}
	var_32_int = var_27_int;
}


void func_390(bool var_122_bool)
{
	bool var_124_bool;
	@HasProperty("blocking", var_124_bool);
	if(!var_124_bool) //@nz
		var_122_bool = false;
	@GetProperty("blocking", var_124_bool);
	var_124_bool = var_122_bool;
}


void func_327(object var_14_object, int var_15_int)
{
	cvector var_18_cvector;
	int var_19_int;
	var_15_int = var_19_int;
	func_250(var_19_int);
	bool var_78_bool = false;
	if(var_15_int != 5) {
		if(var_15_int != 6)
			var_78_bool = true;
	}
	if(var_78_bool != 0) {
		bool var_83_bool = false;
		object var_84_object;
		func_141(var_84_object);
		if(var_14_object != var_84_object) {
			var_90_bool = IsFuncExist(var_14_object, "GetPosition", 1);
			if(var_90_bool != 0)
				var_83_bool = true;
		}
		if(var_83_bool != 0) {
			@GetSpeed(var_18_cvector);
			cvector var_91_cvector; cvector var_92_cvector;
			cvector var_93_cvector; object var_94_object;
			var_14_object = var_94_object;
			func_134(var_93_cvector, var_94_object);
			var_93_cvector = var_92_cvector;
			func_147(var_91_cvector, var_92_cvector);
			var_18_cvector -= (var_91_cvector * 400);
			if((var_18_cvector | var_18_cvector) < 160000)
				@SetSpeed(var_18_cvector);
		}
	}
}


void func_141(object var_84_object)
{
	object var_86_object;
	@self(var_86_object);
	var_86_object = var_84_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_239(string var_49_string)
{
	var_50_bool = GlobalVars[0];
	if(var_50_bool != 0) {
		func_179();
		string var_55_string;
		var_49_string = var_55_string;
		func_213(var_55_string);
	}
}


void func_179(void)
{
	var_51_bool = GlobalVars[0];
	if(var_51_bool != 0) {
		var_52_bool = GlobalVars[0];
		GlobalVars[0] = false;
		@SetTimer(0, 3.0);
	}
}


void func_147(cvector var_91_cvector, cvector var_92_cvector)
{
	float var_100_float = sqrt(var_92_cvector | var_92_cvector);
	if(var_100_float < 0.000001)
		var_91_cvector = [0.0, 0.0, 0.0];
	var_91_cvector = var_92_cvector / var_100_float;
}


void func_213(string var_22_string)
{
	int var_26_int;
	int var_27_int;
	func_198(var_27_int, (var_22_string + "_"));
	int var_25_int;
	var_27_int = var_25_int;
	if(!var_25_int) { //@nz
		@Trace(("No sounds for \"" + var_22_string) + "\"");
	} else {
		@irand(var_26_int, var_25_int);
		@PlaySound((var_22_string + "_") + (var_26_int + 1));
	}
	
}


// @pe
void func_157(float var_111_float, float var_112_float, float var_113_float, float var_114_float)
{
	if(var_112_float < var_113_float) {
		var_113_float = var_111_float;
		return 0;
	}
	if(var_112_float > var_114_float) {
		var_114_float = var_111_float;
		return 0;
	}
	var_112_float = var_111_float;
}


// @pe
void func_375(float var_145_float, float var_146_float, bool var_147_bool)
{
	@ModDarkenLevel(var_145_float);
	@ModBlurLevel(var_145_float);
	if(var_147_bool != 0)
		@SetCameraFOV(var_146_float * (1 + (var_145_float * 0.1)));
}


// @pe
void func_250(int var_19_int)
{
	if(var_19_int == 0) {
		func_213("hit_physical1");
		func_239("scream_physical1");
	} else if(var_19_int == 1) {
			func_213("hit_physical2");
			func_239("scream_physical2");
	}
Label_326:
	for(;;) {
		return 0;

	}
	
	if(var_19_int == 2) {
		func_213("hit_bullet");
		func_239("scream_bullet");
	} else if(var_19_int == 3) {
		func_213("hit_oscoloc");
		func_239("scream_oscoloc");
	} else if(var_19_int == 6) {
		func_213("hit_mental");
		func_239("scream_mental");
	} else if(var_19_int == 7) {
		func_213("hit_rat");
		func_239("scream_rat");
	}
	if(!(var_19_int == 4)) goto Label_326;
}


// @pe
void func_189(float var_109_float, float var_110_float)
{
	float var_112_float = sqrt(var_110_float);
	float var_111_float;
	func_157(var_111_float, var_112_float, (float)0, (float)1);
	var_111_float = var_109_float;
}


