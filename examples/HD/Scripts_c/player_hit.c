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
			func_353(var_15_int, var_16_float);
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
		func_353(var_15_int, var_16_float);
		float var_109_float; float var_110_float;
		var_10_float = var_110_float;
		func_215(var_109_float, var_110_float);
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
		func_129();
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


void func_224(int var_27_int, string var_28_string)
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


void func_353(object var_14_object, int var_15_int)
{
	cvector var_18_cvector;
	int var_19_int;
	var_15_int = var_19_int;
	func_276(var_19_int);
	bool var_78_bool = false;
	if(var_15_int != 5) {
		if(var_15_int != 6)
			var_78_bool = true;
	}
	if(var_78_bool != 0) {
		bool var_83_bool = false;
		object var_84_object;
		func_167(var_84_object);
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
			func_160(var_93_cvector, var_94_object);
			var_93_cvector = var_92_cvector;
			func_173(var_91_cvector, var_92_cvector);
			var_18_cvector -= (var_91_cvector * 400);
			if((var_18_cvector | var_18_cvector) < 160000)
				@SetSpeed(var_18_cvector);
		}
	}
}


void func_160(cvector var_93_cvector, object var_94_object)
{
	cvector var_97_cvector;
	@GetPosition(var_97_cvector);
	cvector var_98_cvector;
	var_94_object->GetPosition(var_98_cvector);
	var_93_cvector = var_98_cvector - var_97_cvector;
}


void func_33(object var_0_object, int var_1_int, float var_109_float)
{
	float var_125_float; float var_126_float; float var_127_float; float var_128_float; float var_129_float;
	var_0_object = 0.0;
	float var_121_float;
	var_109_float = var_121_float;
	if(var_121_float < 0.2) {
	}
	bool var_132_bool;
	func_471(var_132_bool);
	if(!var_132_bool) { //@nz
		float var_139_float;
		func_215(var_139_float, (2.0 * 0.2));
		var_1_int = var_139_float;
	}
	bool var_122_bool;
	@LockCameraFOV(var_122_bool);
	float var_123_float;
	@GetCameraCurrentFOV(var_123_float);
	bool var_124_bool;
	@ModIsDOFEnabled(var_124_bool);
	if(var_124_bool != 0) {
		@ModGetDOFParams(var_125_float, var_126_float, var_127_float, var_128_float);
	} else {
			var_125_float = 0;
			var_126_float = 0;
			var_127_float = 4000.0;
			var_128_float = 4000.0;
			@ModSetDOFEnabled(true);
	}
	for(;;) {
		@sync(var_129_float);
		if(var_1_int < var_0_object) {
			var_0_object -= ((var_129_float * 2.0) / 2);
			if(var_0_object <= 0) {
				float var_157_float; bool var_158_bool; float var_159_float; float var_160_float; float var_161_float; float var_162_float;
				var_123_float = var_157_float;
				var_122_bool = var_158_bool;
				var_125_float = var_159_float;
				var_126_float = var_160_float;
				var_127_float = var_161_float;
				var_128_float = var_162_float;
				func_401((float)0, var_157_float, var_158_bool, var_159_float, var_160_float, var_161_float, var_162_float);
			} else {
		} else {
		var_0_object += (var_129_float * 2.0);
		if(!(var_0_object >= var_1_int)) goto Label_113;
		if(!var_0_object) { //@nz
			float var_222_float; bool var_223_bool; float var_224_float; float var_225_float; float var_226_float; float var_227_float;
			var_123_float = var_222_float;
			var_122_bool = var_223_bool;
			var_125_float = var_224_float;
			var_126_float = var_225_float;
			var_127_float = var_226_float;
			var_128_float = var_227_float;
			func_401((float)0, var_222_float, var_223_bool, var_224_float, var_225_float, var_226_float, var_227_float);
			goto Label_124;
		}
		var_1_int = 0;

		}
		Label_113:
			float var_211_float; bool var_212_bool; float var_213_float; float var_214_float; float var_215_float; float var_216_float;
			var_123_float = var_211_float;
			var_122_bool = var_212_bool;
			var_125_float = var_213_float;
			var_126_float = var_214_float;
			var_127_float = var_215_float;
			var_128_float = var_216_float;
			func_401(var_1_int, var_211_float, var_212_bool, var_213_float, var_214_float, var_215_float, var_216_float);
		}
	Label_124:
		if(var_122_bool != 0)
			@UnlockCameraFOV(var_122_bool);

	}
	
}


void func_167(object var_84_object)
{
	object var_86_object;
	@self(var_86_object);
	var_86_object = var_84_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_265(string var_49_string)
{
	var_50_bool = GlobalVars[0];
	if(var_50_bool != 0) {
		func_205();
		string var_55_string;
		var_49_string = var_55_string;
		func_239(var_55_string);
	}
}


void func_205(void)
{
	var_51_bool = GlobalVars[0];
	if(var_51_bool != 0) {
		var_52_bool = GlobalVars[0];
		GlobalVars[0] = false;
		@SetTimer(0, 3.0);
	}
}


void func_173(cvector var_91_cvector, cvector var_92_cvector)
{
	float var_100_float = sqrt(var_92_cvector | var_92_cvector);
	if(var_100_float < 0.000001)
		var_91_cvector = [0.0, 0.0, 0.0];
	var_91_cvector = var_92_cvector / var_100_float;
}


void func_239(string var_22_string)
{
	int var_26_int;
	int var_27_int;
	func_224(var_27_int, (var_22_string + "_"));
	int var_25_int;
	var_27_int = var_25_int;
	if(!var_25_int) { //@nz
		@Trace(("No sounds for \"" + var_22_string) + "\"");
	} else {
		@irand(var_26_int, var_25_int);
		@PlaySound((var_22_string + "_") + (var_26_int + 1));
	}
	
}


void func_401(float var_156_float, float var_157_float, bool var_158_bool, float var_159_float, float var_160_float, float var_161_float, float var_162_float)
{
	float var_170_float; float var_171_float;
	if(var_156_float <= 0) {
		bool var_175_bool = false;
		if(var_161_float == 4000.0) {
			if(var_162_float == 4000.0)
				var_175_bool = true;
		}
		if(var_175_bool != 0)
			@ModSetDOFEnabled(false);
		@ModSetDOFParams(var_159_float, var_160_float, var_161_float, var_162_float);
	} else {
		float var_190_float;
		func_183(var_190_float, (var_156_float * 2), (float)0, 0.99);
		float var_199_float;
		func_183(var_199_float, (var_156_float * 2), (float)0, 0.99);
		if(((var_161_float - 50.0) * (1 - var_190_float)) < 50.0)
			var_170_float = 50.0;
		if(((var_162_float - 70.0) * (1 - var_199_float)) < 70.0)
			var_171_float = 70.0;
		@ModSetDOFParams(var_159_float, var_160_float, var_170_float, var_171_float);
	}
	float var_168_float;
	float var_169_float;
	@ModGetDOFParams(var_168_float, var_169_float, var_170_float, var_171_float);
	@ModDarkenLevel(var_156_float);
	@ModBlurLevel(var_156_float);
	if(var_158_bool != 0)
		@SetCameraFOV(var_157_float * (1 + (var_156_float * 0.1)));
	
}


// @pe
void func_276(int var_19_int)
{
	if(var_19_int == 0) {
		func_239("hit_physical1");
		func_265("scream_physical1");
	} else if(var_19_int == 1) {
			func_239("hit_physical2");
			func_265("scream_physical2");
	}
Label_352:
	for(;;) {
		return 0;

	}
	
	if(var_19_int == 2) {
		func_239("hit_bullet");
		func_265("scream_bullet");
	} else if(var_19_int == 3) {
		func_239("hit_oscoloc");
		func_265("scream_oscoloc");
	} else if(var_19_int == 6) {
		func_239("hit_mental");
		func_265("scream_mental");
	} else if(var_19_int == 7) {
		func_239("hit_rat");
		func_265("scream_rat");
	}
	if(!(var_19_int == 4)) goto Label_352;
}


void func_471(bool var_132_bool)
{
	bool var_134_bool;
	@HasProperty("blocking", var_134_bool);
	if(!var_134_bool) //@nz
		var_132_bool = false;
	@GetProperty("blocking", var_134_bool);
	var_134_bool = var_132_bool;
}


// @pe
void func_183(float var_111_float, float var_112_float, float var_113_float, float var_114_float)
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
void func_215(float var_109_float, float var_110_float)
{
	float var_112_float = sqrt(var_110_float);
	float var_111_float;
	func_183(var_111_float, var_112_float, (float)0, (float)1);
	var_111_float = var_109_float;
}


