// @GLOBALS: 0:float:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
	{
		bool var_11_bool; float var_12_float;
		@HasProperty("health", var_11_bool);
		if(var_11_bool != 0) {
			@GetProperty("health", var_12_float);
			var_16_float = GlobalVars[0];
			GlobalVars[0] = var_16_float;
		}
		for(;;) {
			func_63(var_11_bool, var_16_float);
		}
	}
	EMIT "Return(); Pop(4)";

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool; object var_11_object;
		func_990(var_10_bool, var_11_object);
		if(var_10_bool != 0) {
			func_127(var_8_bool, var_11_object);
			object var_51_object;
			var_9_object = var_51_object;
			func_997(var_51_object);
		}
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		bool var_11_bool; object var_12_object; string var_13_string;
		func_1024(var_11_bool, var_12_object, var_13_string);
		if(var_11_bool != 0)
			func_127(var_12_object, var_13_string);
		object var_59_object; string var_60_string;
		var_9_bool = var_59_object;
		var_10_object = var_60_string;
		func_1051(var_59_object, var_60_string);
	}

	// @pe
	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool; object var_11_object;
		func_913(var_10_bool, var_11_object);
		if(!var_10_bool) { //@nz
		}
		func_127(var_8_bool, var_11_object);
		object var_45_object;
		var_9_object = var_45_object;
		func_1007(var_45_object);
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		@RequestClearPath(var_9_object);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		func_127(var_8_bool, var_9_object);
		object var_10_object;
		var_9_object = var_10_object;
		func_1082();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, int var_3_int, float var_4_float, float var_5_float, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
	}

}


task task_3
{
	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		object var_12_object;
		var_9_bool = var_12_object;
		string var_13_string;
		var_10_object = var_13_string;
		bool var_11_bool;
		func_1024(var_11_bool, var_12_object, var_13_string);
		if(var_11_bool != 0)
			func_307();
		object var_59_object; string var_60_string;
		var_9_bool = var_59_object;
		var_10_object = var_60_string;
		func_1051(var_59_object, var_60_string);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		func_307();
		object var_10_object;
		var_9_object = var_10_object;
		func_1082();
	}

}


task task_4
{
	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		object var_12_object;
		var_9_bool = var_12_object;
		string var_13_string;
		var_10_object = var_13_string;
		bool var_11_bool;
		func_1024(var_11_bool, var_12_object, var_13_string);
		if(var_11_bool != 0)
			func_372();
		object var_61_object; string var_62_string;
		var_9_bool = var_61_object;
		var_10_object = var_62_string;
		func_1051(var_61_object, var_62_string);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		func_372();
		object var_12_object;
		var_9_object = var_12_object;
		func_1082();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		if(var_9_object == 111) {
			@Speak("run");
			func_342();
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		@RequestClearPath(var_9_object);
	}

}


task task_5
{
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int)
	{
		cvector var_11_cvector; cvector var_12_cvector; cvector var_13_cvector;
		if(var_9_int == 110) {
			bool var_16_bool;
			func_913(var_16_bool, var_3_bool);
			if(!var_16_bool) { //@nz
				func_591();
			} else {
				@GetPosition(var_12_cvector);
				var_3_bool->GetPosition(var_13_cvector); //@t
				float var_53_float; cvector var_54_cvector; cvector var_55_cvector;
				var_12_cvector = var_54_cvector;
				var_13_cvector = var_55_cvector;
				func_947(var_53_float, var_54_cvector, var_55_cvector);
				if(!(var_53_float >= 2250000.0)) goto Label_569;
				func_591();
		}
			int var_60_int;
			var_9_int = var_60_int;
			func_701(var_11_cvector, var_12_cvector, var_13_cvector, var_60_int);
		}
	Label_569:
		goto Label_574;
	
	Label_574:
	
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, string var_10_string)
	{
		object var_12_object;
		var_9_object = var_12_object;
		string var_13_string;
		var_10_string = var_13_string;
		bool var_11_bool;
		func_1024(var_11_bool, var_12_object, var_13_string);
		if(var_11_bool != 0)
			func_591();
		object var_61_object; string var_62_string;
		var_9_object = var_61_object;
		var_10_string = var_62_string;
		func_1051(var_61_object, var_62_string);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object)
	{
		func_591();
		object var_12_object;
		var_9_object = var_12_object;
		func_1082();
	}

}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	func_1017();
}


void func_1024(bool var_11_bool, object var_12_object, string var_13_string)
{
	float var_16_float; bool var_17_bool;
	if(var_13_string == "health") {
		@GetProperty("health", var_16_float);
		var_21_float = GlobalVars[0];
		var_17_bool = var_16_float < var_21_float;
		var_22_float = GlobalVars[0];
		var_16_float = var_22_float;
		GlobalVars[0] = var_22_float;
		bool var_23_bool = false;
		if(var_17_bool != 0) {
			bool var_25_bool; object var_26_object;
			var_12_object = var_26_object;
			func_913(var_25_bool, var_26_object);
			if(var_25_bool != 0)
				var_23_bool = true;
		}
		if(var_23_bool != 0)
			var_11_bool = true;
	}
	var_11_bool = false;
}


// @pe
void func_512(bool var_183_bool, object var_184_object)
{
	object var_186_object;
	var_184_object = var_186_object;
	bool var_185_bool;
	func_913(var_185_bool, var_186_object);
	var_185_bool = var_183_bool;
}


void func_637(bool var_0_bool, bool var_1_bool, object var_2_object, object var_83_object)
{
	cvector var_92_cvector; float var_93_float;
	cvector var_94_cvector;
	func_607(var_93_float, var_94_cvector, 1.7453294);
	cvector var_89_cvector;
	var_94_cvector = var_89_cvector;
	float var_90_float = var_89_cvector | var_89_cvector;
	if(var_90_float < 10000.0) {
		var_127_float = sqrt(var_90_float);
		@Trace("Can't retreat, distance: " + var_127_float);
		@Sleep(0.5);
		return 10;
	}
	var_130_float = GetByIndex(var_89_cvector, 0);
	var_131_float = GetByIndex(var_89_cvector, 2);
	@Rotate(var_130_float, var_131_float);
	cvector var_132_cvector;
	func_784(var_132_cvector);
	@SetTimer(120, 0.5);
	
Label_670:
	bool var_91_bool;
	@MovePoint((var_132_cvector + var_89_cvector), 1, var_91_bool);
	if(var_91_bool != 0) {
		if(var_83_object == null) {
			goto Label_700;
		EMIT "GOTO 0x2ba";

		Label_700:
			for(;;) {
				return 10;
		}
			cvector var_140_cvector;
			func_607(var_93_float, var_140_cvector, 2.6179938);
			var_140_cvector = var_92_cvector;
			if((var_92_cvector | var_92_cvector) >= 10000.0) {
				cvector var_144_cvector;
				func_784(var_144_cvector);
				var_1_bool = var_144_cvector + var_92_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_670; //@nz

	}
}


void func_519(string var_201_string)
{
	var_201_string = "walk";
}


// @pe
void func_776(string var_116_string, int var_117_int)
{
	if(var_117_int == 1)
		var_116_string = "fire";
	var_116_string = "phys";
}


void func_521(string var_202_string)
{
	var_202_string = "run";
}


// @pe
void func_523(bool var_3_bool, object var_75_object)
{
	var_3_bool = var_75_object;
	@Speak("retreat");
	@SetTimer(110, 1);
	object var_83_object;
	func_637(var_78_bool, var_79_object, var_83_object, var_83_object);
	@KillTimer(110);
}


void func_143(bool var_38_bool)
{
	var_38_bool = false;
}


void func_399(bool var_0_bool, bool var_1_bool, bool var_160_bool, object var_161_object, float var_162_float, float var_163_float, bool var_164_bool, bool var_165_bool)
{
	bool var_175_bool; object var_177_object; cvector var_178_cvector; cvector var_179_cvector; float var_181_float; object var_182_object;
	var_0_bool = false;
	var_1_bool = var_161_object;
	bool var_176_bool;
	var_165_bool = var_176_bool;
	
	for(;;) {
		bool var_183_bool; object var_184_object;
		var_161_object = var_184_object;
		func_512(var_183_bool, var_184_object);
		if(!var_183_bool) { //@nz
			var_160_bool = false;
			return 16;
		}
		var_161_object->GetPosition(var_178_cvector);
		@GetPosition(var_179_cvector);
		var_181_float = (var_178_cvector - var_179_cvector) | (var_178_cvector - var_179_cvector);
		bool var_188_bool = false;
		if(var_163_float > 0) {
			if(var_181_float > (var_163_float * var_163_float))
				var_188_bool = true;
		}
		if(var_188_bool != 0) {
			@Stop();
			var_160_bool = false;
			return 16;
		}
		if(var_181_float > (var_162_float * var_162_float)) {
			var_161_object->GetPFPosition(var_178_cvector);
			@FindPathTo(var_182_object, var_178_cvector);
			if(var_182_object != null) {
				var_182_object = var_177_object;
				var_182_object = null;
			}
			if(var_177_object != null) {
				if(var_176_bool == 0) goto Label_452;
				var_176_bool = false;
				@RotatePath(var_177_object, var_175_bool);
				if(!var_175_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_201_string;
						func_519(var_201_string);
						string var_202_string;
						func_521(var_202_string);
						@FollowPath(var_177_object, var_164_bool, var_175_bool, var_201_string, var_202_string);
						if(!var_175_bool) { //@nz
							if(var_0_bool == 0) goto Label_471;
							var_177_object = null;
						}
					EMIT "GOTO 0x1d8";

					Label_471:
						} else {
					var_177_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_175_bool);
					if(!var_175_bool) { //@nz
						if(var_0_bool != 0) {
							var_177_object = null;
							goto Label_499;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_499;
		}
			var_182_object = null;
			goto Label_497;

		Label_497:
			var_177_object = null;

		}
	Label_499:
		for(;;) {
			var_160_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_913(bool var_25_bool, object var_26_object)
{
	object var_30_object;
	var_26_object = var_30_object;
	bool var_29_bool;
	func_877(var_29_bool, var_30_object);
	if(!var_29_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_47_bool; object var_48_object;
	func_796(var_47_bool, var_48_object, "noaccess");
	if(!var_47_bool) { //@nz
		var_25_bool = true;
		return 2;
	}
	int var_28_int;
	var_48_object->GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == 0;
}


void func_145(void)
{
}


void func_784(cvector var_132_cvector)
{
	cvector var_134_cvector;
	@GetPosition(var_134_cvector);
	var_134_cvector = var_132_cvector;
}


void func_146(void)
{
	@Speak("death");
	func_154("die");
}


void func_789(cvector var_117_cvector, object var_118_object)
{
	cvector var_121_cvector;
	@GetPosition(var_121_cvector);
	cvector var_122_cvector;
	var_118_object->GetPosition(var_122_cvector);
	var_117_cvector = var_122_cvector - var_121_cvector;
}


// @pe
void func_154(string var_12_string)
{
	string var_13_string;
	var_12_string = var_13_string;
	func_163(var_13_string);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1051(object var_61_object, string var_62_string)
{
	float var_64_float;
	if(var_62_string == "health") {
		@GetProperty("health", var_64_float);
		if(var_64_float <= 0)
			@SignalDeath(var_61_object);
		bool var_70_bool = false;
		var_71_float = GlobalVars[0];
		if(var_64_float < var_71_float) {
			bool var_73_bool; object var_74_object;
			var_61_object = var_74_object;
			func_913(var_73_bool, var_74_object);
			if(var_73_bool != 0)
				var_70_bool = true;
		}
		if(var_70_bool != 0) {
			object var_75_object;
			var_61_object = var_75_object;
			TaskCall(5);
			func_523(var_79_object, var_75_object);
			TaskReturn();
		}
	}
}


void func_796(bool var_47_bool, object var_48_object, string var_49_string)
{
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", 2);
	if(!var_54_bool) { //@nz
		var_47_bool = false;
		return 2;
	}
	bool var_51_bool;
	var_48_object->HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
}


// @pe
void func_163(string var_13_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_13_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_13_string);
	@RemoveEnvelope();
}


void func_808(float var_91_float, object var_92_object, float var_93_float, int var_94_int)
{
	int var_101_int; int var_103_int;
	object var_108_object;
	var_92_object = var_108_object;
	bool var_107_bool;
	func_796(var_107_bool, var_108_object, "health");
	if(!var_107_bool) //@nz
		var_91_float = 0.0;
	bool var_111_bool; object var_112_object;
	func_796(var_111_bool, var_112_object, "armor");
	if(!var_111_bool) //@nz
		var_101_int = 0;
	else
		var_112_object->GetProperty("armor", var_101_int);
	string var_116_string; int var_117_int;
	var_94_int = var_117_int;
	func_776(var_116_string, var_117_int);
	string var_102_string = "armor_" + var_116_string;
	bool var_120_bool; object var_121_object; string var_122_string;
	var_92_object = var_121_object;
	func_796(var_120_bool, var_121_object, var_122_string);
	if(!var_120_bool) //@nz
		var_103_int = 0;
	else
		var_92_object->GetProperty(var_122_string, var_103_int);

	float var_124_float;
	func_951(var_124_float, ((var_101_int + var_103_int) / 100.0), (float)1);
	float var_104_float;
	var_124_float = var_104_float;
	float var_105_float;
	var_92_object->GetProperty("health", var_105_float);
	float var_134_float;
	func_958(var_134_float, (var_105_float - (var_93_float * (1 - var_104_float))), (float)0, (float)1);
	var_92_object->SetProperty("health", var_134_float);
	float var_106_float = var_91_float;
	
}


void func_937(cvector var_110_cvector, cvector var_111_cvector)
{
	float var_113_float = sqrt(var_111_cvector | var_111_cvector);
	if(var_113_float < 0.000001)
		var_110_cvector = [0.0, 0.0, 0.0];
	var_110_cvector = var_111_cvector / var_113_float;
}


void func_307(void)
{
	@Stop();
	@StopAnimation();
	@StopAsync();
}


void func_947(float var_53_float, cvector var_54_cvector, cvector var_55_cvector)
{
	var_53_float = (var_55_cvector - var_54_cvector) | (var_55_cvector - var_54_cvector);
}


// @pe
void func_951(float var_124_float, float var_125_float, float var_126_float)
{
	if(var_125_float < var_126_float)
		var_125_float = var_124_float;
	else
		var_126_float = var_124_float;
	
}


void func_701(bool var_0_bool, bool var_1_bool, object var_2_object, int var_60_int)
{
	cvector var_65_cvector; float var_66_float; cvector var_67_cvector; float var_68_float;
	if(var_60_int != 120) {
	}
	if(var_0_bool == null) {
		@Stop();
		@KillTimer(1);
		var_2_object = true;
	} else {
		@GetDirection(var_65_cvector);
		@FindDirLength(var_66_float, var_65_cvector, 7000.0);
		cvector var_74_cvector;
		func_607(var_68_float, var_74_cvector, 1.7453294);
		var_74_cvector = var_67_cvector;
		var_68_float = var_67_cvector | var_67_cvector;
		bool var_104_bool = false;
		if(var_68_float >= 10000.0) {
			bool var_107_bool;
			var_111_bool = var_68_float >= ((var_66_float * var_66_float) * 2.25);
			if(var_111_bool != 1) {
				bool var_112_bool;
				func_760(true, var_112_bool);
				if(var_112_bool != 1)
					var_107_bool = false;
			}
			if(var_107_bool != 0)
				var_104_bool = true;
		}
		if(var_104_bool == 0) goto Label_752;
		@Stop();
		cvector var_132_cvector;
		func_784(var_132_cvector);
		var_1_bool = var_132_cvector + var_67_cvector;
	}
Label_752:
	
}


// @pe
void func_958(float var_134_float, float var_135_float, float var_136_float, float var_137_float)
{
	if(var_135_float < var_136_float) {
		var_136_float = var_134_float;
		return 0;
	}
	if(var_135_float > var_137_float) {
		var_137_float = var_134_float;
		return 0;
	}
	var_135_float = var_134_float;
}


void func_63(bool var_0_bool, bool var_1_bool)
{
	float var_24_float; cvector var_25_cvector; cvector var_26_cvector; float var_27_float; bool var_28_bool; object var_29_object; bool var_30_bool;
	@rand(var_24_float, 0.5);
	@Sleep(var_24_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_75:
				@GetPosition(var_26_cvector);
				@GetCameraFarDistance(var_27_float);
				@GetRandomPFPointInCircle(var_25_cvector, var_26_cvector, (var_27_float * 2.5), var_28_bool);
				if(var_28_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_75;
			}
				var_1_bool = false;
		}
		}
		goto Label_92;

	Label_92:
		@FindShiftedPathTo(var_29_object, var_25_cvector);
		if(var_29_object != null) {
			@RotatePath(var_29_object, var_30_bool);
			if(var_30_bool != 0) {
				bool var_38_bool;
				func_143(var_38_bool);
				@FollowPath(var_29_object, var_38_bool, var_30_bool);
				var_29_object = null;
				if(var_30_bool != 0) {
					TaskCall(1);
					func_145();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_29_object = null;
	}
	
}


void func_191(bool var_0_bool, object var_46_object, bool var_150_bool)
{
	float var_59_float; bool var_60_bool; cvector var_61_cvector; cvector var_62_cvector; int var_65_int; object var_66_object; float var_67_float;
	var_0_bool = var_46_object;
	float var_58_float;
	@GetAttackDistance(var_58_float);
	@Face(var_0_bool);
	
	for(;;) {
		bool var_69_bool;
		func_977(var_69_bool, var_0_bool);
		if(var_69_bool != 0) {
			var_0_bool->GetPosition(var_61_cvector); //@t
			@GetPosition(var_62_cvector);
			if(((var_61_cvector - var_62_cvector) | (var_61_cvector - var_62_cvector)) < ((var_58_float + 10) * (var_58_float + 10))) {
				@irand(var_65_int, 2);
				@Speak("attack" + (var_65_int + 1));
				@SetAttackState(true);
				@PlayAnimation("all", "attack_begin");
				@WaitForAnimEnd(var_60_bool);
				if(!var_60_bool) { //@nz
					@SetAttackState(false);
				} else {
						bool var_88_bool;
						func_913(var_88_bool, var_0_bool);
						if(var_88_bool != 0) {
							@GetVictim(var_58_float, var_66_object);
							@ReportAttack(var_0_bool);
							if(var_66_object == var_0_bool) {
								float var_91_float; object var_92_object;
								var_66_object = var_92_object;
								func_808(var_91_float, var_92_object, 0.05, 0);
								var_91_float = var_67_float;
								@ReportHit(var_0_bool, 0, var_67_float, 0.05);
							}
							var_66_object = null;
						}
						@SetAttackState(false);
						@PlayAnimation("all", "attack_end");
						@WaitForAnimEnd(var_60_bool);
						var_146_bool = !var_60_bool; //@nz
						if(var_146_bool == 0) goto Label_272;
				}
		}
		Label_288:
			for(;;) {
				@StopAsync();

			}

		Label_272:
		} else {
		@StopAsync();
		bool var_147_bool; float var_149_float;
		var_59_float = var_149_float;
		TaskCall(4);
		func_323(var_147_bool, var_0_bool, var_149_float);
		TaskReturn();
		if(!var_150_bool) { //@nz
			goto Label_288;
		}
		@Face(var_0_bool);
		}
	}
	
}


void func_323(bool var_147_bool, object var_148_object, float var_149_float)
{
	func_342();
	bool var_160_bool; object var_161_object;
	var_148_object = var_161_object;
	bool var_152_bool;
	bool var_153_bool;
	func_399(var_152_bool, var_153_bool, var_160_bool, var_161_object, (var_149_float * 0.9), (float)5000, true, true);
	var_160_bool = var_153_bool;
	func_352();
	var_153_bool = var_147_bool;
}


// @pe
void func_969(float var_123_float, cvector var_124_cvector, cvector var_125_cvector)
{
	var_130_float = sqrt((var_124_cvector | var_124_cvector) * (var_125_cvector | var_125_cvector));
	var_123_float = (var_124_cvector | var_125_cvector) / var_130_float;
}


void func_591(void)
{
	@KillTimer(110);
	func_753(var_9_object);
}


void func_977(bool var_69_bool, object var_70_object)
{
	bool var_73_bool; object var_74_object;
	func_913(var_73_bool, var_74_object);
	if(!var_73_bool) //@nz
		var_69_bool = false;
	bool var_72_bool;
	@IsPlayerActor(var_74_object, var_72_bool);
	var_72_bool = var_69_bool;
}


void func_342(void)
{
	float var_14_float;
	@rand(var_14_float, 10);
	@SetTimer(111, (var_14_float + 10));
}


// @pe
void func_990(bool var_10_bool, object var_11_object)
{
	object var_13_object;
	var_11_object = var_13_object;
	bool var_12_bool;
	func_977(var_12_bool, var_13_object);
	var_12_bool = var_10_bool;
}


void func_607(bool var_0_bool, cvector var_94_cvector, float var_95_float)
{
	cvector var_102_cvector;
	@GetPosition(var_102_cvector);
	cvector var_103_cvector;
	var_0_bool->GetPosition(var_103_cvector); //@t
	cvector var_104_cvector;
	@GetDirection(var_104_cvector);
	cvector var_108_cvector;
	cvector var_110_cvector;
	func_937(var_110_cvector, (var_102_cvector - var_103_cvector));
	func_937(var_108_cvector, (var_110_cvector + (var_104_cvector * 0.75)));
	cvector var_105_cvector;
	var_108_cvector = var_105_cvector;
	cvector var_106_cvector;
	float var_107_float;
	@FindLongestDir(var_106_cvector, var_107_float, var_105_cvector, var_95_float, 32, 7000.0);
	if((var_107_float - 100) < 0)
		var_107_float = 0;
	var_94_cvector = var_106_cvector * var_107_float;
}


void func_352(void)
{
	@KillTimer(111);
}


// @pe
void func_997(object var_51_object)
{
	TaskCall(3);
	object var_52_object;
	func_191(var_52_object, var_53_object, var_52_object);
	TaskReturn();
	@ResetAAS();
}


void func_872(bool var_40_bool, object var_41_object)
{
	bool var_43_bool;
	var_41_object->IsDead(var_43_bool);
	var_43_bool = var_40_bool;
}


void func_877(bool var_29_bool, object var_30_object)
{
	if(var_30_object == null) {
		var_29_bool = false;
		return 4;
	}
	bool var_36_bool = false;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", 1);
	if(var_39_bool != 0) {
		bool var_40_bool; object var_41_object;
		var_30_object = var_41_object;
		func_872(var_40_bool, var_41_object);
		if(var_40_bool != 0)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		var_29_bool = false;
		return 4;
	}
	object var_33_object;
	@GetScene(var_33_object);
	if(var_33_object == null) {
		var_29_bool = false;
		return 4;
	}
	object var_34_object;
	var_30_object->GetScene(var_34_object);
	if(var_33_object != var_34_object) {
		var_29_bool = false;
		return 4;
	}
	var_29_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1007(object var_45_object)
{
	TaskCall(3);
	object var_46_object;
	func_191(var_46_object, var_47_object, var_46_object);
	TaskReturn();
	@ResetAAS();
}


void func_753(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_372(void)
{
	func_352();
	func_505(var_9_object);
}


void func_760(bool var_0_bool, bool var_112_bool)
{
	cvector var_115_cvector;
	@GetDirection(var_115_cvector);
	cvector var_117_cvector;
	func_789(var_117_cvector, var_0_bool);
	cvector var_116_cvector;
	var_117_cvector = var_116_cvector;
	float var_123_float; cvector var_124_cvector; cvector var_125_cvector;
	var_115_cvector = var_124_cvector;
	var_116_cvector = var_125_cvector;
	func_969(var_123_float, var_124_cvector, var_125_cvector);
	var_112_bool = var_123_float >= -0.34202012;
}


void func_505(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1017(void)
{
	TaskCall(2);
	func_146();
	TaskReturn();
}


void func_127(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


